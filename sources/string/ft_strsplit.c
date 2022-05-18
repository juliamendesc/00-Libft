/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:04:53 by julcarva          #+#    #+#             */
/*   Updated: 2022/05/18 12:05:58 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../../includes/libft.h"

void	ft_check_malloc(void *ptr)
{
	if (!ptr)
	{
		free(ptr);
		ptr = NULL;
		ft_puterror("Malloc failed\n", -1);
	}
}

static int	words(char const *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i])
			words++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (words);
}

static char	**memory_giver(char const *str, char c, int i, int j)
{
	char	**res;
	int		letters;

	res = (char **)malloc(sizeof(char *) * (words(str, c) + 1));
	ft_check_malloc(res);
	while (str[i])
	{
		letters = 0;
		while (str[i] == c && str[i])
			i++;
		while (str[i] != c && str[i] != '\0')
		{
			letters++;
			i++;
		}
		if (letters > 0)
		{
			res[j++] = (char *)malloc(sizeof(char) * letters + 1);
			ft_check_malloc(res);
		}
	}
	res[j] = 0;
	return (res);
}

char	**ft_strsplit(char const *str, char c)
{
	char	**res;
	int		i;
	int		j;
	int		str_number;
	int		size;

	if (str == NULL)
		return (NULL);
	i = 0;
	str_number = 0;
	size = words(str, c);
	res = memory_giver(str, c, i, str_number);
	if (res == NULL)
		return (NULL);
	while (str_number < size)
	{
		while (str[i] == c && str[i])
			i++;
		j = 0;
		while (str[i] != c && str[i])
			res[str_number][j++] = str[i++];
		res[str_number][j] = '\0';
		str_number++;
	}
	return (res);
}
