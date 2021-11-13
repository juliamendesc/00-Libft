/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacksplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:11:51 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:12:00 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

/*
** One stack moves 2x faster than the other. When the second reaches
** the end, the first will be in the half. Then, the 3rd stack can take
** the value of the second half (first->next)
*/

t_stacks	*ft_stack_split(t_stacks *head)
{
	t_stacks	*first;
	t_stacks	*second;
	t_stacks	*temporary;

	first = head;
	second = head->next;
	while (second != NULL)
	{
		second = second->next;
		if (second != NULL)
		{
			second = second->next;
			first = first->next;
		}
	}
	temporary = first->next;
	first->next = NULL;
	return (temporary);
}
