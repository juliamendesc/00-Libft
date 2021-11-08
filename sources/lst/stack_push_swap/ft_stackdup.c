#include "../../../includes/libft.h"

t_stacks *ft_lstdup_ps(t_stacks *lst)
{
	t_stacks *duplicate;
	t_stacks *new_node;

	duplicate = 0;
	while (lst)
	{
		new_node = ft_lstnew_ps(lst->number);
		if (!new_node)
		{
			ft_lstclear_ps(&duplicate);
			return (0);
		}
		ft_lstadd_back_ps(&duplicate, new_node);
		lst = lst->next;
	}
	return (duplicate);
}
