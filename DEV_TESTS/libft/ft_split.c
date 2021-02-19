/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 15:00:22 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/19 21:00:14 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* First, we count how many divisions there are between strings
*/

static int	ft_div_counter(char const *s, char c)
{
	int i;
	int counter;

	counter = 0;
	if (s[0] && s[0] != c)
		counter++;
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			counter++;
		i++;
	}
	return (counter);
}

/*
* Then, we segment the 's' array into parts considering the char that divides.
* A string is created considering the length between separators.
*/

static char	*ft_segmentator(char const *s, char c, int i)
{
	int		j;
	int		k;
	char	*seg_string;

	j = i;
	while (s[i] && s[i] != c)
		i++;
	if (!(seg_string = (char *)malloc(sizeof(char) * ((i - j) + 1))))
		{
			free(seg_string);
			return (NULL);
		}
	k = 0;
	while (j != i)
	{
		seg_string[k] = s[j];
		k++;
		j++;
	}
	seg_string[k] = '\0';
	return (seg_string);
}

/*
* ft_strlen(s) will be the maximum len possible for the i. The division counter indicates
* how many pointers we need to create to allocate the strings.
* The split will take place as long as i is smaller than the total length AND within the
* number of divisions.
*/

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_div_counter(s, c) + 1))))
	{
		free(tab);
		return (NULL);
	}

	i = 0;
	j = 0;
	while (i <= (int)ft_strlen(s) && ft_div_counter(s, c))
	{
		if (ft_strlen(ft_segmentator(s, c, i)))
		{
			if (!(tab[j] = ft_segmentator(s, c, i)))
			{
				while (*tab)
					free(*tab);
				free(tab);
				return (NULL);
			}
			i += (ft_strlen(tab[j]) + 1);
			j++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
