#include "../../../includes/libft.h"

t_stacks *ft_merge_sort(t_stacks *first, t_stacks *second)
{
	if (!first)
		return (second);
	if (!second)
		return (first);
	if (first->number < second->number)
	{
		first->next = ft_merge_sort(first->next, second);
		first->next->previous = first;
		first->previous = 0;
		return (first);
	}
	else
	{
		second->next = ft_merge_sort(first, second->next);
		second->next->previous = second;
		second->previous = 0;
		return (second);
	}
}
