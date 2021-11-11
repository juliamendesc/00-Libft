#include "../../../includes/libft.h"

/*
** Removes list item/items from stack
** The function will remove the link between the current
** item and the previous and next items. The previous item
** will point to current->next as next item and the next
** item will point to current->previous as previous item.
*/

void ft_stack_remove_item(t_stacks **lst)
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
