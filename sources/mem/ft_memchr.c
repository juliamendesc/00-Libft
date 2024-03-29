/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:30:02 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:04:25 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	char	find;
	size_t	i;

	src = (char *)s;
	find = (char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == find)
		{
			return ((char *)src + i);
		}
		i++;
	}
	return (NULL);
}
