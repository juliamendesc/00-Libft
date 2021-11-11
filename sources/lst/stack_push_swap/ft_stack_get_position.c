#include "../../../includes/libft.h"

/*
** gets the int position (index) in linked list or returns out of range
*/

int ft_stack_get_position(t_stacks *lst, int position)
{
	int i;

	i = 0;
	while (lst)
	{
		if (i == position)
			return (lst->number);
		lst = lst->next;
		i++;
	}
	return (-2147483648);
}
