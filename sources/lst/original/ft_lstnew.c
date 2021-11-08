
#include "../../../includes/libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (new)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}
