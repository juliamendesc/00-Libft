/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:43:39 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/23 18:43:41 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_memdel(void **ap)
{
	if (ap == NULL)
		return ;
	free(*ap);
	*ap = NULL;
}
