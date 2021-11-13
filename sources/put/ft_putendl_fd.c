/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:02:00 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:02:05 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	if (fd < 0)
		return ;
	ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}
