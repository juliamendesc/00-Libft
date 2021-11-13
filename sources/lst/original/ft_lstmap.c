/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:09:11 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:09:40 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*head;

	if (!lst || !f)
		return (NULL);
	head = ft_lstnew((*f)(lst->content));
	if (!head)
		return (NULL);
	current = head;
	while (lst->next)
	{
		lst = lst->next;
		current->next = ft_lstnew((*f)(lst->content));
		if (!current->next)
		{
			ft_lstclear(&current, del);
			return (NULL);
		}
		current = current->next;
	}
	return (head);
}
