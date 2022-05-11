#include "../includes/get_next_line_fdf.h"

static void free_ptr(void **ptr)
{
	if (*ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

static void list_to_str(t_list **buffer_lists, int str_len, char *res)
{
	t_list *tmp;
	char *content;
	int i;

	i = 0;
	while (i < str_len)
	{
		tmp = buffer_lists[0];
		content = (char *)tmp->content;
		while (*content != '\0' && i < str_len)
		{
			res[i] = *content;
			content++;
			i++;
		}
		if (*content != 0)
			buffer_lists[0]->next = ft_lstnew_fdf(ft_strdup_fdf(content));
		buffer_lists[0] = buffer_lists[0]->next;
		free_ptr((void **)&tmp->content);
		free_ptr((void **)&tmp);
	}
}

char *concat_all(size_t end, int len, t_list **buffer_lists)
{
	int str_len;
	char *res;

	res = NULL;
	if (len <= 0)
	{
		free_ptr((void **)&buffer_lists[0]->content);
		free_ptr((void **)buffer_lists);
		return (NULL);
	}
	str_len = len - end;
	res = (char *)malloc(str_len + 1 * sizeof(char));
	if (!res)
		return (NULL);
	res[str_len] = '\0';
	list_to_str(buffer_lists, str_len, res);
	return (res);
}

char *read_text(t_list **buffer_lists, t_list *last, int len, int fd)
{
	char *content;
	ssize_t bytes_read;
	t_list *end;

	content = ft_strchr_fdf(last->content, '\n');
	if (content != NULL)
	{
		bytes_read = ft_strlen_fdf(content + 1);
		return (concat_all(bytes_read, len, &buffer_lists[0]));
	}
	content = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!content)
		return (NULL);
	bytes_read = read(fd, content, BUFFER_SIZE);
	if (bytes_read <= 0)
	{
		free_ptr((void **)&content);
		return (concat_all(bytes_read, len, &buffer_lists[0]));
	}
	else
		len += bytes_read;
	content[bytes_read] = 0;
	end = ft_lstnew_fdf(content);
	last->next = end;
	return (read_text(&buffer_lists[0], end, len, fd));
}

char *get_next_line_fdf(int fd)
{
	static t_list *buffer_lists[MAX_FD + 1];
	char *result;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > MAX_FD)
		return (NULL);
	if (!buffer_lists[fd])
		buffer_lists[fd] = ft_lstnew_fdf(ft_strdup_fdf(""));
	result = read_text(&buffer_lists[fd], buffer_lists[fd],
										 ft_strlen_fdf(buffer_lists[fd]->content), fd);
	return (result);
}
