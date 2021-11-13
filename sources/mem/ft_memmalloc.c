/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmalloc_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 18:18:57 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:03:36 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
