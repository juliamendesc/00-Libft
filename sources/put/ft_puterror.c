/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:01:42 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:01:47 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** Outputs the string msg to the standard output followed by an exit of the
** program with a custom return value (defined by ret).
*/

void	ft_puterror(char *msg, int ret)
{
	ft_putendl(msg);
	exit(ret);
}
