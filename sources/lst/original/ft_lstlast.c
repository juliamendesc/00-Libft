/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:09:50 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:09:56 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next != NULL)
			lst = lst->next;
	}
	else
		return (NULL);
	return (lst);
}
