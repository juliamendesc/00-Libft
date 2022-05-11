/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 20:05:48 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 15:47:57 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *result;
	char *start;

	if (!s1 && !s2)
		return (NULL);
	result = ft_strnew((s1 ? ft_strlen(s1) : 0) + (s2 ? ft_strlen(s2) : 0));
	if ((start = result))
	{
		if (s1)
			while (*s1)
				*result++ = *s1++;
		if (s2)
			while (*s2)
				*result++ = *s2++;
		*result = '\0';
	}
	return (start);
}
