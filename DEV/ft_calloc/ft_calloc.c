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

/*
The C library function void *calloc(size_t nitems, size_t size) allocates
the requested memory and returns a pointer to it. The difference in malloc
and calloc is that malloc does not set the memory to zero where as calloc
sets allocated memory to zero.
*/

void	*ft_calloc(size_t nelem, size_t elsize)
{
	//nelem (number of elements) - This is the number of elements to be allocated.
	//elsize (element size) - This is the size of elements.
	char	*ptr;

	if (nelem == 0 || elsize == 0)
		nelem = elsize = 1;
	ptr = ft_malloc(nelem * elsize);
	return (ptr);
}
