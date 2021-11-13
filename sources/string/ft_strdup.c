/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:49:22 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 15:48:25 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s) + 1;
	copy = malloc((unsigned int)len);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, len);
	return (copy);
}
