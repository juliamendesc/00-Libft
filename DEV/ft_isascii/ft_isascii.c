/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 23:47:23 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/16 23:47:23 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//ASCII TABLE IN HEXADECIMAL

int ft_isascii(int c)
{
	if ((c >= 0) && (c <= 0x7f))
		return (1);
	return (0);
}
