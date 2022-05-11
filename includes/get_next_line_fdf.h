#ifndef GET_NEXT_LINE_FDF_H

#define GET_NEXT_LINE_FDF_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1
#endif

#ifndef MAX_FD
#define MAX_FD 256
#endif

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

typedef struct s_node
{
	void *content;
	struct s_node *next;
} t_node;

char *get_next_line_fdf(int fd);
t_list *ft_lstnew_fdf(void *content);
char *ft_strchr_fdf(const char *str, int n);
size_t ft_strlen_fdf(const char *str);
char *ft_strdup_fdf(const char *str);

#endif
