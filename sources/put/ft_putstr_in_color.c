/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_in_color.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:59:54 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:00:00 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putstr_in_color(char *color, char *str)
{
	ft_putstr(color);
	ft_putstr(str);
	ft_putstr(TEXT_COLOR_DEFAULT);
}
