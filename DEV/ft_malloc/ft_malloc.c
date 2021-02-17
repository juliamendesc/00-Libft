/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 00:23:12 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/17 00:23:12 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	/*We first make a void variable of pointer m. This is so that we can use the
	 *zone of allocated memory that will be applied to it for any type of data.*/
	void	*m;
	/*We then use malloc to allocate memory to our m variable based on the size
	 *given in the parameter. If the allocation fails we return NULL. Otherwise
	 we then run the function ft_bzero on our allocated zone of memory m and
	 give it our size parameter. We then return our void variable m.*/
	m = malloc(size);
	if (m == NULL)
		return (NULL);
	ft_bzero(m, size);
	return (m);
}
