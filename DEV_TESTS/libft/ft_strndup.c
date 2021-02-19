/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:04:53 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/19 18:08:23 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char *copy;

	if (!(copy = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	ft_strncpy(copy, str, n);
	copy[n] = '\0';
	return (copy);
}
