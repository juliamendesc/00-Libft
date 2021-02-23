/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 19:30:36 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/23 19:43:05 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*In this function we will be adding a new link, called 'new' that is passed
 * in our parameters, to a list and placing this link at the head of our list.*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	/*First we check to make sure the link new that is passed to our parameters
	 * is NULL. If it is not, we set our link new's element next to the first
	 * link that is pointed to by alst in our parameters. We then set the
	 * pointer of alst to new, thus setting it to the head of our linked list.*/
	if (new != NULL)
	{
		ft_lstlast(&*lst);
		new->next = *lst;
		*lst = new;
	}
}
