#include "../../../includes/libft.h"

t_stacks *ft_stack_last(t_stacks *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
