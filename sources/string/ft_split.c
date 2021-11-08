/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 15:00:22 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/22 11:24:04 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int ft_div_counter(char const *s, char c)
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

static char *ft_segment_str(char const *s, char c, int i)
{
	int j;
	int k;
	char *seg_string;

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

char **ft_split(char const *s, char c)
{
	char **tab;
	int i;
	int j;

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
		if (ft_strlen(ft_segment_str(s, c, i)))
		{
			if (!(tab[j] = ft_segment_str(s, c, i)))
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
