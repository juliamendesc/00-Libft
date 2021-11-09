#include "../../includes/libft.h"

/*
** This function verifies if a number in a string is a digit.
** It considers negative numbers too, since it ignores the - signal, if any.
*/

int ft_isallstringdigit(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] == '-')
		{
			i++;
			continue;
		}
		if (ft_isdigit(str[i]) == 1)
			j = 1;
		else
			return (0);
		i++;
	}
	return (j);
}
