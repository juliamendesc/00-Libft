/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_get_position.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:15:11 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:15:17 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

/*
** gets the int in a determined position (index) 
** in linked list or returns the min int possible 
** (for control purposes).
*/

int	ft_stack_get_position(t_stacks *lst, int position)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (i == position)
			return (lst->number);
		lst = lst->next;
		i++;
	}
	return (-2147483648);
}
