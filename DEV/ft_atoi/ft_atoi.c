/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 23:08:20 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/16 23:08:20 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
The man says that  The call atoi(str) shall be equivalent to:
(int) strtol(str, (char **)NULL, 10) except that the handling of errors
may differ. If the value cannot be represented, the behavior is undefined
*/

int	ft_atoi(const char *str)
{
	int	i;

	i = strtol(str, (char **)NULL, 10);
	return (i);
}
