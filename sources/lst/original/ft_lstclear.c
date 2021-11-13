/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:10:25 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:10:33 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next;

	tmp = *lst;
	if (del != NULL)
	{
		while (tmp != NULL)
		{
			next = tmp->next;
			del(tmp->content);
			free(tmp);
			tmp = next;
		}
		*lst = NULL;
	}
}
