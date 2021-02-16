/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:28:25 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/16 23:05:08 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The C library function char *strrchr(const char *str, int c) searches for the
last occurrence of the character c (an unsigned char) in the string pointed to,
by the argument str.*/
char	*ft_strrchr(const char *s, int c)
{
 	int	i;
	char	a;

	a = c;
	i = ft_strlen(s);
	if (a == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
