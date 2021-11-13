/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:17:53 by julcarva          #+#    #+#             */
/*   Updated: 2021/11/13 16:23:28 by julcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# define READLINE_OK 1
# define EOF_REACHED 0
# define ERR_HAPPENED -1
# define NOT_ENDLINE 0
# define FOUND_ENDLINE 1

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# ifndef ARG_MAX
#  define ARG_MAX 4096
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 8
# endif

int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);

#endif
