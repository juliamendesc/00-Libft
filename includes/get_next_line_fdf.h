/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_fdf.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <julcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:42:23 by julcarva          #+#    #+#             */
/*   Updated: 2022/05/16 13:32:15 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_FDF_H
# define GET_NEXT_LINE_FDF_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# ifndef MAX_FD
#  define MAX_FD 256
# endif

typedef struct s_node
{
	void			*content;
	struct s_node	*next;
}	t_node;

char	*get_next_line_fdf(int fd);
t_list	*ft_lstnew_fdf(void *content);
char	*ft_strchr_fdf(const char *str, int n);
size_t	ft_strlen_fdf(const char *str);
char	*ft_strdup_fdf(const char *str);

#endif
