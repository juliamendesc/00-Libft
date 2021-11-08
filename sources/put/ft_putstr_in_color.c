#include "../../includes/libft.h"

void	ft_putstr_in_color(char *color, char *str)
{
	ft_putstr(color);
	ft_putstr(str);
	ft_putstr(TEXT_COLOR_DEFAULT);
}
