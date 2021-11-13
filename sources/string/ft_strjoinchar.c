/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:47:03 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 15:47:19 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoinchar(char *s1, char s2)
{
	int		i;
	char	*temp;
	int		len;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	temp = (char *)malloc((len + 2) * sizeof(char));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		temp[i] = s1[i];
		i++;
	}
	temp[i] = s2;
	i++;
	temp[i] = '\0';
	return (temp);
}
