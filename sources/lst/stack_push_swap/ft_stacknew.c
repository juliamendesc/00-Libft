/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:12:40 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:12:47 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

t_stacks	*ft_lstnew_ps(int content)
{
	t_stacks	*stack;

	stack = (t_stacks *)malloc(sizeof(t_stacks) * 1);
	if (!stack)
		return (NULL);
	stack->number = content;
	stack->next = NULL;
	stack->previous = NULL;
	return (stack);
}
