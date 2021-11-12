#include "../../../includes/libft.h"

/*
** gets the int in a determined position (index) 
** in linked list or returns the min int possible 
** (for control purposes).
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
