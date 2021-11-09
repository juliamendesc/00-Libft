
#include "../../../includes/libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *current;
	t_list *head;

	if (!lst || !f)
		return (NULL);
	if (!(head = ft_lstnew((*f)(lst->content))))
		return (NULL);
	current = head;
	while (lst->next)
	{
		lst = lst->next;
		current->next = ft_lstnew((*f)(lst->content));
		if (!current->next)
		{
			ft_lstclear(&current, del);
			return (NULL);
		}
		current = current->next;
	}
	return (head);
}
