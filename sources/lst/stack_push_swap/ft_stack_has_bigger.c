#include "../../../includes/libft.h"

int ft_stack_has_bigger(t_stacks *lst, int value)
{
	while (lst)
	{
		if (lst->number > value)
			return (1);
		lst = lst->next;
	}
	return (0);
}
