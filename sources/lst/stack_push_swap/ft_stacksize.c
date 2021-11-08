#include "../../../includes/libft.h"

int ft_lstsize_ps(t_stacks *lst)
{
	int count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
