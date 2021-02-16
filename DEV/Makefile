# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 17:02:37 by julcarva          #+#    #+#              #
#    Updated: 2021/02/16 16:59:42 by julcarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	./ft_memset/ft_memset.c \
			./ft_bzero/ft_bzero.c \
			./ft_memcpy/ft_memcpy.c \
			./ft_memccpy/ft_memccpy.c \
			./ft_memchr/ft_memchr.c \
			./ft_memmove/ft_memmove.c \
			./ft_memset/ft_memset.c \
			./ft_strchr/ft_strchr.c \
			./ft_strlcat/ft_strlcat.c \
			./ft_strlcpy/ft_strlcpy.c \
			./ft_strlen/ft_strlen.c \
			./ft_strrchr/ft_strrchr.c

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
