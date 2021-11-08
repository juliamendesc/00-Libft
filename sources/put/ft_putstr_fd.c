#include "../../includes/libft.h"

void ft_putstr_fd(char *str, int fd)
{
	int i;

	i = 0;
	if (!str || fd < 0)
		return;
	while (str[i])
		ft_putchar_fd(str[i++], fd);
}
