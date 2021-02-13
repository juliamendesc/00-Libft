/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:20:07 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/13 17:01:17 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*According to the man this function copies len bytes from string src to string
 * dst. The two strings may overlap; the copy is always done in a non
 * destructive manner. This means not overlapping directly src and dest.
 * The ft_memmove function returns the original value of dst.  */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
/* 	unsigned char	*dst;
	unsigned char	*s;
	size_t	i;

	if (!dest && !src && n > 0)
		return (NULL);
	dst = (unsigned char *)dest;
	s = (unsigned char *)src;

	if (dest <= src)
	{
		i = 0;
		while (i < n)
		{
			dst[i] = s[i];
			i++;
		}
	}
	else
	{
		i = (int)n;
		while (--i >= 0)
			dst[i] = s[i];
	}

	return (dest); */

	/*We start by creating a char pointer variable tmp which we will use to
	 * move len bytes of src into and then we will move the len bytes of src we
	 * placed into tmp into dst. We do this using our ft_memcpy function. But
	 * before we do this we have to make sure to allocate memory for tmp to be
	 * able to hold the bytes of src to move them to dst. We use our given len
	 * parameter to determine the size of the malloc for tmp. If the allocation
	 * fails we will return NULL. If not we will go ahead and use ft_memcpy
	 * first on tmp, src, and len, and then we will call it again on dst, tmp,
	 * and len. Once our memory move is finished we will then free the memory
	 * we allocated for tmp. And last we will return the original value of dst.*/
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * n);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}