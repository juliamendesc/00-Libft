#include "../../../includes/libft.h"

void ft_stack_sort(t_stacks **lst)
{
	t_stacks *first;
	t_stacks *second;

	first = *lst;
	if (!first || !first->next)
		return;
	second = ft_stack_split(first);
	ft_stack_sort(&first);
	ft_stack_sort(&second);
	*lst = ft_merge_sort(first, second);
}
