/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:41:54 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/16 19:17:18 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	char 	find;
	size_t	i;

	src = (char *)s;
	find = (char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == find)
		{
			return((char *)src + i);
		}
		i++;
	}
	return (NULL);
}
