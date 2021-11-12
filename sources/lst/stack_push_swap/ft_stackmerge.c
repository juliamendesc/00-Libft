#include "../../../includes/libft.h"

/*
** This function will compare each number in each index between
** stacks 1 and 2. If the 1.number is lower than 2.number,
** it maintains the 1.number as the first number of the list (set
** previous as 0) and moves to the next number in 1 in comparison to 2.
** In the end, it will return a list of sorted numbers since each will be 
** recursively checked.
*/

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
