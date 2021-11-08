#include "../../../includes/libft.h"

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
