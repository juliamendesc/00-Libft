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

void		*ft_malloc(size_t size)
{
	void	*m;

	m = malloc(size);
	if (m == NULL)
		return (NULL);
	ft_bzero(m, size);
	return (m);
}
