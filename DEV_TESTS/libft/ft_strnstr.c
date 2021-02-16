/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:47:28 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/16 20:47:28 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Find the first occurrence of find in s, where the search is limited to the
 * first slen characters of s.
 */

char *ft_strnstr(const char *s, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*find == '\0')
		return ((char *)s);
	while (i < n && s[i] != '\0')
	{
		j = 0;
		while (i + j < n && s[i + j] == find[j] && find[j] != '\0')
			j++;
		if (find[j] == '\0')
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
