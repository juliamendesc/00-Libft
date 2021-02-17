/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 00:13:59 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/17 00:13:59 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char	*ptr;

	if (nelem == 0 || elsize == 0)
		nelem = elsize = 1;
	ptr = ft_malloc(nelem * elsize);
	return (ptr);
}
