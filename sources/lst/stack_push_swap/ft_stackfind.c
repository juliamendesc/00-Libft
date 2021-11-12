#include "../../../includes/libft.h"

/*
** gets the position (index) in a determined int 
** in linked list or returns the min int possible 
** (for control purposes).
*/

int ft_stack_find_index(t_stacks *lst, int value)
{
	int i;

	i = 0;
	while (lst)
	{
		if (value == lst->number)
			return (i);
		lst = lst->next;
		i++;
	}
	return (-2147483648);
}
