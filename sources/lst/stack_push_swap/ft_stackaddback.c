/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackaddback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:13:52 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:13:57 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

void	ft_lstadd_back_ps(t_stacks **lst, t_stacks *new)
{
	t_stacks	*last;

	if (!*lst)
		*lst = new;
	else
	{
		last = ft_stack_last(*lst);
		new->previous = last;
		last->next = new;
	}
}
