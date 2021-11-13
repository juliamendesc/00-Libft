/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:13:30 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:13:38 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

void	ft_lstclear_ps(t_stacks **lst)
{
	t_stacks	*current;
	t_stacks	*next;

	if (!lst)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
}
