/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:12:18 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/11 18:12:18 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	/* The bzero function places nbyte null bytes in the string s.
	* This function is used to set all the socket structures with null values.
	* According to the man this function writes n zeroed bytes to the string s. If
 	* n is zero, ft_bzero does nothing. Another way of saying this is that we will
 	* be making a string of size n and filling each index position with a 0. We
 	* use our previously made ft_memset function to do this. Review ft_memset to
 	* understand how it works and notice the parameters we give it here when we
 	* call it. We set it ahead of time to fill whatever string at size n with 0s.*/

	ft_memset(s, 0, n);
}