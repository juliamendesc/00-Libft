#include "../../../includes/libft.h"

void ft_lstclear_ps(t_stacks **lst)
{
	t_stacks *current;
	t_stacks *next;

	if (!lst)
		return;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
}
