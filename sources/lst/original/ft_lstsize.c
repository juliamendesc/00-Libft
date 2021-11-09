
#include "../../../includes/libft.h"

int ft_lstsize(t_list *lst)
{
	int nelem;

	nelem = 0;
	while (lst)
	{
		lst = lst->next;
		nelem++;
	}
	return (nelem);
}
