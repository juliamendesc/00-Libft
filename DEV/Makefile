# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julcarva <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 17:02:37 by julcarva          #+#    #+#              #
#    Updated: 2021/02/23 19:08:28 by julcarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c \
			ft_memmove.c ft_memset.c ft_memcmp.c ft_strchr.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strrchr.c ft_strnlen.c ft_strnstr.c \
			ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c \
			ft_strdup.c ft_strndup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
			ft_split.c ft_itoa.c ft_strcpy_bonus.c ft_strncpy.c ft_strmapi.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew.c \
			\
			ft_putchar_bonus.c ft_putstr_bonus.c ft_putnbr_bonus.c \
			ft_memdel_bonus.

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
