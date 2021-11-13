/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:25:37 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 15:40:41 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	if (!(s))
		return (NULL);
	if ((start >= ft_strlen(s)) || (len == 0))
		return (ft_calloc(1, sizeof(char)));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
