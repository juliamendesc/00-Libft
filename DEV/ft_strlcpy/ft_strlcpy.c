/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:04:42 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/13 17:44:20 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* NÃO TEM TESTE PARA ESTE */

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (i < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = 0;
	return (i);
}