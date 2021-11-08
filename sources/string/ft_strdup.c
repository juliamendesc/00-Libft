/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:49:22 by julcarva          #+#    #+#             */
/*   Updated: 2021/04/12 15:05:46 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char *ft_strdup(const char *s)
{
	size_t len;
	char *copy;

	len = ft_strlen(s) + 1;
	if (!(copy = malloc((unsigned int)len)))
		return (NULL);
	ft_memcpy(copy, s, len);
	return (copy);
}
