/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 00:30:18 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/17 00:30:18 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The function strdup() is used to duplicate a string.
It returns a pointer to null-terminated byte string.
*/
char	*ft_strdup(const char *s)
{
	size_t len;
	char *copy;

	len = strlen(s) + 1;
	if (!(copy = malloc((unsigned int)len)))
		return (NULL);
	memcpy(copy, s, len);
	return (copy);
}
