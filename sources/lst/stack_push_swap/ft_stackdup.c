/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:13:18 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:13:25 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

t_stacks	*ft_lstdup_ps(t_stacks *lst)
{
	t_stacks	*duplicate;
	t_stacks	*new_node;

	duplicate = 0;
	while (lst)
	{
		new_node = ft_lstnew_ps(lst->number);
		if (!new_node)
		{
			ft_lstclear_ps(&duplicate);
			return (0);
		}
		ft_lstadd_back_ps(&duplicate, new_node);
		lst = lst->next;
	}
	return (duplicate);
}
