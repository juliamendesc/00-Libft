# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/17 13:44:20 by julcarva          #+#    #+#              #
#    Updated: 2021/02/19 19:15:10 by julcarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -I includes/

HEADER = ./includes/libft.h

FREE = ft_free_array

IS = ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_isallstringdigit \
	ft_isallstringalpha ft_isspace

LST_ORIGINAL = ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize


STACK_PUSH_SWAP = ft_stack_get_position ft_stack_get ft_stack_has_bigger \
ft_stack_last ft_stack_print ft_stack_remove ft_stackaddback ft_stackaddfront \
ft_stackclear ft_stackdup ft_stackfind ft_stackmerge ft_stacknew ft_stacksize \
ft_stacksort ft_stacksplit

MATH = ft_abs

MEM = ft_bzero ft_calloc ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_memmove \
		ft_memset

PUT = ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_putendl \
		ft_puterror ft_putstr ft_putchar ft_putnbr ft_putstr_in_color

STRING = ft_split2 ft_strchr ft_strdup ft_strjoinchr_bonus ft_strlcpy \
		ft_strmapi ft_strnstr ft_strtrim ft_split ft_strcmp_bonus ft_strjoin \
		ft_strlcat ft_strlen ft_strncmp ft_strrchr ft_substr ft_strcpy\
		ft_strsplit ft_straddc ft_strtol

TO = ft_atoi ft_itoa ft_tolower ft_toupper ft_atoll

SRC = $(addsuffix .c, $(addprefix sources/free/, $(FREE))) \
	$(addsuffix .c, $(addprefix sources/is/, $(IS))) \
	$(addsuffix .c, $(addprefix sources/lst/original/, $(LST_ORIGINAL))) \
	$(addsuffix .c, $(addprefix sources/lst/stack_push_swap/, $(STACK_PUSH_SWAP))) \
	$(addsuffix .c, $(addprefix sources/math/, $(MATH))) \
	$(addsuffix .c, $(addprefix sources/mem/, $(MEM))) \
	$(addsuffix .c, $(addprefix sources/put/, $(PUT))) \
	$(addsuffix .c, $(addprefix sources/string/, $(STRING))) \
	$(addsuffix .c, $(addprefix sources/to/, $(TO)))

OBJS	=	${SRCS:.c=.o}

${NAME}:	${OBJS} ${SRCS}
				ar rc ${NAME} ${OBJS}
				@echo "\n\033[0;32mLibft compiled!"

all:		${NAME}

clean:
			${RM} ${OBJS}
			@echo "\n\033[0;32mLibft *o removed!"

fclean:		clean
			${RM} ${NAME}
			@echo "\033[0;32mLibft libft.a removed!"

re:			fclean all

.PHONY:		all clean fclean re
