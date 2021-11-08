#include "../../../includes/libft.h"

t_stacks *ft_stack_split(t_stacks *head)
{
	t_stacks *first;
	t_stacks *second;
	t_stacks *temporary;

	first = head;
	second = head;
	while (second->next && second->next->next)
	{
		second = second->next->next;
		first = first->next;
	}
	temporary = first->next;
	first->next = 0;
	return (temporary);
}
