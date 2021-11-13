/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:35:14 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 15:46:38 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < size)
		ft_memcpy(dest, src, srclen + 1);
	else if (size != 0)
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (srclen);
}
