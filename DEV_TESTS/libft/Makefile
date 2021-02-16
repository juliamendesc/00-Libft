# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 17:02:37 by julcarva          #+#    #+#              #
#    Updated: 2021/02/16 20:10:47 by julcarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memmove.c \
			ft_memset.c \
			ft_memcmp.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strrchr.c \
			ft_strnlen.c

OBJS	=	${SRCS:.c=.o}

NAME	=	libft.a

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:		#{CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				ar rc ${NAME} ${OBJS}
				@echo "$(NAME) created"
				ranlib ${NAME}
				@echo "$(NAME) indexed"

all:		${NAME}

clean:
			${RM} ${OBJS}
			@echo "OBJ deleted"

fclean:		clean
			${RM} ${NAME}
			@echo "$(NAME) deleted"

re:			fclean all

.PHONY:		all clean fclean re
