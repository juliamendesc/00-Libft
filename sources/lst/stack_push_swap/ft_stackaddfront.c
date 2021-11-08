#include "../../../includes/libft.h"

void ft_lstadd_front_ps(t_stacks **lst, t_stacks *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
