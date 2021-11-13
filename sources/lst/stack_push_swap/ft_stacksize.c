/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacksize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:12:27 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:12:33 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

int	ft_lstsize_ps(t_stacks *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
