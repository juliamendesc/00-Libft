/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:44:26 by julcarva          #+#    #+#             */
/*   Updated: 2021/02/23 19:04:34 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* allocates (with malloc(3)) and returns a “fresh” link. The variables content
* and content_size of the new link are initialized by copy of the parameters of
* the function. If the parameter content is nul, the variable content is
* initialized to NULL and the variable content_size is initialized to 0 even if
* the parameter content_size isn’t. The variable next is initialized to NULL.
* If the allocation fails, the function returns NULL
*/

/*We will be allocating memory for, and returning, a "fresh" linked list. The
 * elements content and content_size within our new link will be copied from the
 * parameters of the function. If the parameter content is NULL the the element
 * content_size is initialized to 0 regardless of the paramter of content_size.
 * The element of next is initialized to NULL. If the memory allocation fails
 * then we will return NULL*/

t_list	*ft_lstnew(void *content)
{
	/*We first declare a new t_list structure called 'new'*/
	t_list	*new;
	/*We then proceed to allocate the memory required for the stucture to exist*/
	/*In the event that the memory allocation failed we return NULL*/
	if (!(new = (t_list *)malloc(sizeof(t_list) * 1)))
		return(NULL);
	/*If the parameter of content is NULL we set the content element to NULL*/
	new->content = NULL;
	new->next = NULL;
	return (new);
}