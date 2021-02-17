/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:25:37 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/17 17:29:55 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	find;

	if (!(substr = (char *)malloc((char)len - start + 1)))
		return (NULL);
	find = start;
	substr = ft_strnstr(*s, start, len);
	return (substr);
}
