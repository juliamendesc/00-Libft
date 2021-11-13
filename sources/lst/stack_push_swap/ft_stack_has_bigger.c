/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_has_bigger.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:15:01 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:15:05 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

int	ft_stack_has_bigger(t_stacks *lst, int value)
{
	while (lst)
	{
		if (lst->number > value)
			return (1);
		lst = lst->next;
	}
	return (0);
}
