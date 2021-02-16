/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:28:11 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/16 19:18:00 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen = ft_strlen(src);
	size_t	destlen = ft_strnlen(dest, size);

	if (destlen == size)
		return size+srclen;
	if (srclen < size - destlen)
		ft_memcpy(dest + destlen, src, srclen + 1);
	else
	{
		ft_memcpy(dest + destlen, src, size - 1);
		dest[destlen + size - 1] = '\0';
	}
	return (destlen + srclen);
}
