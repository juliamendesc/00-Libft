/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:33:20 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/18 19:28:02 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// transforms integer to string

char	*ft_itoa(int n)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 2))) // numero + '\0
		return (NULL);
	if (n == -2147483648)
		return (ft_strjoin(str, "-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	} else if (n >= 10) {
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	} else if (n < 10 && n >= 0) {
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}