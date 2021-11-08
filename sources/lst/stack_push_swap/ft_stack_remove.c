#include "../../../includes/libft.h"

void ft_stack_remove(t_stacks **lst)
{
	t_stacks *temporary;

	if (!lst)
		return;
	temporary = *lst;
	if (temporary->next)
		temporary->next->previous = temporary->previous;
	if (temporary->previous)
		temporary->previous->next = temporary->next;
	if (temporary->previous)
		*lst = temporary->previous;
	else
		*lst = temporary->next;
	free(temporary);
}
