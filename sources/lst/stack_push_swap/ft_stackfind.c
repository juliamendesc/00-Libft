#include "../../../includes/libft.h"

int ft_stack_find(t_stacks *lst, int value)
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
