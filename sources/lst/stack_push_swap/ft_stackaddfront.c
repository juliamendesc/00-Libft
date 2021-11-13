/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackaddfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:13:45 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:13:48 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

void	ft_lstadd_front_ps(t_stacks **lst, t_stacks *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
