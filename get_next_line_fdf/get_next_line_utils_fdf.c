/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_fdf.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:42:16 by julcarva          #+#    #+#             */
/*   Updated: 2022/05/13 20:44:57 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line_fdf.h"

char	*ft_strchr_fdf(const char *str, int n)
{
	int	i;

	i = 0;
	while (*(str + i) != (char)n)
	{
		if (*(str + i) == 0)
			return (NULL);
		i++;
	}
	return ((char *)(str + i));
}

t_list	*ft_lstnew_fdf(void *content)
{
	t_list	*new;

	new = malloc(1 * sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = (NULL);
	return (new);
}

size_t	ft_strlen_fdf(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup_fdf(const char *str)
{
	size_t	i;
	size_t	len;
	char	*str2;

	len = ft_strlen_fdf(str) + 1;
	str2 = (char *)malloc(sizeof(char) * len);
	if (str2 == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		str2[i] = str[i];
	return (str2);
}
