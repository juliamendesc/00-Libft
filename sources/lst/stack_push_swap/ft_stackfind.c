/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackfind.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:13:05 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:13:12 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

/*
** gets the position (index) in a determined int 
** in linked list or returns the min int possible 
** (for control purposes).
*/

int	ft_stack_find_index(t_stacks *lst, int value)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (value == lst->number)
			return (i);
		lst = lst->next;
		i++;
	}
	return (-2147483648);
}
