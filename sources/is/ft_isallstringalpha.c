#include "../../includes/libft.h"

int ft_isallstringalpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (ft_isalpha(str[i]) == 1)
			j = 1;
		else
			return (0);
		i++;
	}
	return (j);
}
