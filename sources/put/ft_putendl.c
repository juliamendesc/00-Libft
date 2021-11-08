#include "libft.h"

/*
** Outputs the string str to the standard output followed by a ’\n’.
*/

void ft_putendl(char const *str)
{
	int i;

	i = 0;
	if (str)
		while (str[i])
			write(1, &str[i++], 1);
	write(1, "\n", 1);
}
