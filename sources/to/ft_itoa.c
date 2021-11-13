/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:33:20 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:24:34 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

// transforms integer to string

static int	ft_digit_count(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

static int	free_and_return(char *str)
{
	free(str);
	return (0);
}

static char	*create_string(int len)
{
	char	*str;

	str = malloc(len * sizeof(char) + 1);
	if (!str)
		free_and_return(str);
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = n;
	i = ft_digit_count(nb);
	str = create_string(i);
	str[i--] = 0;
	if (nb == 0)
	{
		str = ft_calloc(2, sizeof(char));
		str[0] = 48;
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}
