#include "../../../includes/libft.h"

void ft_lstadd_back_ps(t_stacks **lst, t_stacks *new)
{
	t_stacks *last;

	if (!*lst)
		*lst = new;
	else
	{
		last = ft_stack_last(*lst);
		new->previous = last;
		last->next = new;
	}
}
