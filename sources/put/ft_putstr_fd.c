/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:00:20 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:00:28 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	if (!str || fd < 0)
		return ;
	while (str[i])
		ft_putchar_fd(str[i++], fd);
}
