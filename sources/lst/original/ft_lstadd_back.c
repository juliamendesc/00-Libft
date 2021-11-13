/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:11:02 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:11:17 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (!new)
		return ;
	if (*lst != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*lst = new;
}
