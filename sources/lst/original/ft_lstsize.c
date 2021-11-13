/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:08:44 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:08:50 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	nelem;

	nelem = 0;
	while (lst)
	{
		lst = lst->next;
		nelem++;
	}
	return (nelem);
}
