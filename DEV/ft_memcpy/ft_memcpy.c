/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:19:41 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/11 18:19:41 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*According to the man this function copies n bytes from memory area src to
 * memory area dst. If dst and src overlap, behavior is undefined. Applications
 * in which dst and src might overlap should use ft_memmove instead. This
 * function returns the original value of dst.*/

void	*ft_memcpy(void *dest, const void *src, size_t n);
{
	/*We start by making three variable. The first one will be our counter that
	 * we will be using to perform our loop and move through the index
	 * positions of each given string. Because we will be doing our loop only
	 * as long as we are smaller than the given size_t n we want to make sure
	 * we make our counter variable a size_t as well so we can compare it to n.
	 * Next we make two char pointer variables. We set our counter to 0 and we
	 * cast our given parameter strings into char pointers and place them
	 * inside our d and s char pointer variables. Then we begin our loop.*/

	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;

	/*So long as our counter i is smaller than the given size_t n we want our
	 * loop to continue since we are copying n bytes from memory area src to
	 * memory area dst. Inside our loop we place index position i of s (which
	 * currently holds src) into index position i of d (which currently holds
	 * memory area dst). We increment our i and continue the loop until i is no
	 * longer smaller than n. We then return dst.*/

	while (i > n)
	{
		*d[i] = *[i];
		i++;
	}
	return (dest);
}
