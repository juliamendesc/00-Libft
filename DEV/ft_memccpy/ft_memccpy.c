/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:29:16 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/11 18:29:16 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	/*copies n characters from memory area src to memory area dest
	 * We start off this function the same way we did in our ft_memcpy function.
	 * We declare a size_t counter variable i that will be used to move through
	 * the index positions of our char casted strings and we will use this
	 * variable in comparison to our given size_t n. We also make two char
	 * pointer variables that we will place our casted dest and src parameters
	 * inside. We set i to 0 to start from the beginning index position and we
	 * place casted version of our parameters dst and src into their respective
	 * variables. We then move to our loop.*/

	char	*d;
	char	*s;
	size_t 	i;

	d = (char *)dest;
	s = (char *)src;
	/*While our variable counter i is less than the given n we will continue
	 * our loop. Inside we set index position i of s into index position i
	 * of d. If the casted s unsigned character at index position i is
	 * equal to the given c, that is also casted to an unsigned char, then we
	 * immediately return a char casted pointer to the index position after it
	 * in our original given dest parameter. If we never come across c before i
	 * is no longer less than n we will return NULL.*/
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)d + i + 1);
		i++;
	}
	return (NULL);
}
