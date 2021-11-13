/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:02:12 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:02:19 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** Outputs the string str to the standard output followed by a ’\n’.
*/

void	ft_putendl(char const *str)
{
	int	i;

	i = 0;
	if (str)
		while (str[i])
			write(1, &str[i++], 1);
	write(1, "\n", 1);
}
