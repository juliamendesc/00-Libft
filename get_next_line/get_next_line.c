/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:16:09 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:26:46 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

static int	ft_saveline(char **save, char **line)
{
	int		len;
	char	*temp;

	len = 0;
	temp = NULL;
	while ((*save)[len] != '\n' && (*save)[len] != '\0')
		len++;
	if ((*save)[len] == '\n')
	{
		*line = ft_substr(*save, 0, len);
		temp = ft_strdup(&((*save)[len + 1]));
		free(*save);
		*save = temp;
	}
	else
	{
		*line = ft_strdup(*save);
		free(*save);
		*save = NULL;
		return (0);
	}
	return (1);
}

static int	ft_output(char **save, char **line, int r, int fd)
{
	if (r < 0)
		return (-1);
	else if (r == 0 && save[fd] == NULL)
	{
		*line = ft_strdup("");
		return (0);
	}
	else
		return (ft_saveline(&save[fd], line));
}

int	get_next_line(int fd, char **line)
{
	int			r;
	static char	*save[OPEN_MAX];
	char		*temp;
	char		buff[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0 || !line || read(fd, buff, 0) < 0)
		return (-1);
	r = read(fd, buff, BUFFER_SIZE);
	while (r > 0)
	{
		buff[r] = '\0';
		if (save[fd] == NULL)
			save[fd] = ft_strdup(buff);
		else
		{
			temp = ft_strjoin(save[fd], buff);
			free(save[fd]);
			save[fd] = temp;
		}
		if (ft_strchr(save[fd], '\n'))
			break ;
	}
	return (ft_output(save, line, r, fd));
}
