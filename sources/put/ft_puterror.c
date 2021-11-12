#include "../../includes/libft.h"

/*
** Outputs the string msg to the standard output followed by an exit of the
** program with a custom return value (defined by ret).
*/

void	ft_puterror(char *msg, int ret)
{
	ft_putendl(msg);
	exit(ret);
}
