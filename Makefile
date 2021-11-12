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

# NAME	=	libft.a

# CC		=	gcc

# RM		=	rm -f

# CFLAGS	=	-Wall -Wextra -Werror -I includes/

# HEADER = ./includes/libft.h ./includes/get_next_line.h

# FREE = ft_free_array

# IS = ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_isallstringdigit \
# 	ft_isallstringalpha ft_isspace ft_islowercase ft_isuppercase

# LST_ORIGINAL = ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
# 				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

# STACK_PUSH_SWAP = ft_stack_get_position ft_stack_get ft_stack_has_bigger \
# ft_stack_last ft_stack_print ft_stack_remove ft_stackaddback ft_stackaddfront \
# ft_stackclear ft_stackdup ft_stackfind ft_stackmerge ft_stacknew ft_stacksize \
# ft_stacksort ft_stacksplit

# MATH = ft_abs

# MEM = ft_bzero ft_calloc ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_memmove \
# 		ft_memset ft_memdel ft_memalloc

# PUT = ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_putendl \
# 		ft_puterror ft_putstr ft_putchar ft_putnbr ft_putstr_in_color

# STRING = ft_split2 ft_strchr ft_strdup ft_strjoinchr_bonus ft_strlcpy \
# 		ft_strmapi ft_strnstr ft_strtrim ft_split ft_strcmp_bonus ft_strjoin \
# 		ft_strlcat ft_strlen ft_strncmp ft_strrchr ft_substr ft_strcpy \
# 		ft_strsplit ft_straddc ft_strtol ft_strcmp ft_strjoinchar \
# 		ft_straddchar

# TO = ft_atoi ft_itoa ft_tolower ft_toupper ft_atoll

# 	# get_next_line Variables #
# GNL			=	get_next_line.c

# SRC = $(addsuffix .c, $(addprefix sources/free/, $(FREE))) \
# 	$(addsuffix .c, $(addprefix sources/is/, $(IS))) \
# 	$(addsuffix .c, $(addprefix sources/lst/original/, $(LST_ORIGINAL))) \
# 	$(addsuffix .c, $(addprefix sources/lst/stack_push_swap/, $(STACK_PUSH_SWAP))) \
# 	$(addsuffix .c, $(addprefix sources/math/, $(MATH))) \
# 	$(addsuffix .c, $(addprefix sources/mem/, $(MEM))) \
# 	$(addsuffix .c, $(addprefix sources/put/, $(PUT))) \
# 	$(addsuffix .c, $(addprefix sources/string/, $(STRING))) \
# 	$(addsuffix .c, $(addprefix sources/to/, $(TO))) \
# 	$(addsuffix .c, $(addprefix get_next_line/, $(GNL)))

# OBJS	=	${SRCS:.c=.o}

# ${NAME}:	${OBJS} ${SRCS}
# 				ar rc ${NAME} ${OBJS}
# 				@echo "\n\033[0;32mLibft compiled!"

# all:		${NAME}

# clean:
# 			${RM} ${OBJS}
# 			@echo "\n\033[0;32mLibft *o removed!"

# fclean:		clean
# 			${RM} ${NAME}
# 			@echo "\033[0;32mLibft libft.a removed!"

# re:			fclean all

# .PHONY:		all clean fclean re

	# Library Name #
NAME		=	libft.a

	# Main (Mandatory) Variables #
LIBFT_DIR	=	./
SRC			=	$(STACK) $(GNL) $(LIST) $(FREE) $(IS) $(STACK_PUSH_SWAP) $(MATH) $(MEM) $(PUT) $(STRING) \
				$(TO)
OBJ			=	$(SRC:.c=.o)

	# linked_list Variables #
LIST_DIR	=	./sources/lst
LIST		=	./sources/lst/original/ft_lstadd_back.c ./sources/lst/original/ft_lstadd_front.c \
				./sources/lst/original/ft_lstclear.c ./sources/lst/original/ft_lstdelone.c \
				./sources/lst/original/ft_lstiter.c ./sources/lst/original/ft_lstlast.c \
				./sources/lst/original/ft_lstmap.c ./sources/lst/original/ft_lstnew.c \
				./sources/lst/original/ft_lstsize.c
LIST_O		=	$(LIST:.c=.o)

FREE 		= 	./sources/free/ft_free_array.c
FREE_O		=	$(FREE:.c=.o)

IS 			= 	./sources/is/ft_isalnum.c ./sources/is/ft_isalpha.c \
				./sources/is/ft_isascii.c ./sources/is/ft_isdigit.c \
				./sources/is/ft_isprint.c ./sources/is/ft_isallstringdigit.c \
				./sources/is/ft_isallstringalpha.c ./sources/is/ft_isspace.c \
				./sources/is/ft_islowercase.c ./sources/is/ft_isuppercase.c
IS_O		=	$(IS:.c=.o)

STACK_PUSH_SWAP = 	./sources/lst/stack_push_swap/ft_stack_get_position.c \
					./sources/lst/stack_push_swap/ft_stack_get.c \
					./sources/lst/stack_push_swap/ft_stack_has_bigger.c \
					./sources/lst/stack_push_swap/ft_stack_last.c \
					./sources/lst/stack_push_swap/ft_stack_print.c \
					./sources/lst/stack_push_swap/ft_stack_remove.c \
					./sources/lst/stack_push_swap/ft_stackaddback.c \
					./sources/lst/stack_push_swap/ft_stackaddfront.c \
					./sources/lst/stack_push_swap/ft_stackclear.c \
					./sources/lst/stack_push_swap/ft_stackdup.c \
					./sources/lst/stack_push_swap/ft_stackfind.c \
					./sources/lst/stack_push_swap/ft_stackmerge.c \
					./sources/lst/stack_push_swap/ft_stacknew.c \
					./sources/lst/stack_push_swap/ft_stacksize.c \
					./sources/lst/stack_push_swap/ft_stacksort.c \
					./sources/lst/stack_push_swap/ft_stacksplit.c
STACK_PUSH_SWAP_O	=	$(STACK_PUSH_SWAP:.c=.o)

MATH 			= 	./sources/math/ft_abs.c
MATH_O			=	$(MATH:.c=.o)

MEM 			= 	./sources/mem/ft_bzero.c ./sources/mem/ft_calloc.c \
					./sources/mem/ft_memccpy.c ./sources/mem/ft_memchr.c \
					./sources/mem/ft_memcmp.c ./sources/mem/ft_memcpy.c \
					./sources/mem/ft_memmove.c ./sources/mem/ft_memset.c \
					./sources/mem/ft_memdel.c ./sources/mem/ft_memmalloc.c
MEM_O			=	$(MEM:.c=.o)

PUT 			= 	./sources/put/ft_putchar_fd.c ./sources/put/ft_putendl_fd.c \
					./sources/put/ft_putnbr_fd.c ./sources/put/ft_putstr_fd.c \
					./sources/put/ft_putendl.c ./sources/put/ft_puterror.c \
					./sources/put/ft_putstr.c ./sources/put/ft_putchar.c \
					./sources/put/ft_putnbr.c ./sources/put/ft_putstr_in_color.c
PUT_O			=	$(PUT:.c=.o)

STRING 			= 	./sources/string/ft_split.c ./sources/string/ft_straddchar.c \
					./sources/string/ft_strchr.c ./sources/string/ft_strcmp.c \
					./sources/string/ft_strcpy.c ./sources/string/ft_strdup.c \
					./sources/string/ft_strjoin.c ./sources/string/ft_strjoinchar.c \
					./sources/string/ft_strlcat.c ./sources/string/ft_strlcpy.c \
					./sources/string/ft_strlen.c ./sources/string/ft_strncmp.c \
					./sources/string/ft_strncpy.c ./sources/string/ft_strndup.c \
					./sources/string/ft_strnlen.c ./sources/string/ft_strnstr.c \
					./sources/string/ft_strrchr.c ./sources/string/ft_strtrim.c \
					./sources/string/ft_substr.c
STRING_O		=	$(STRING:.c=.o)

TO 				= 	./sources/to/ft_atoi.c ./sources/to/ft_itoa.c ./sources/to/ft_tolower.c \
					./sources/to/ft_toupper.c ./sources/to/ft_atoll.c
TO_O			=	$(YO:.c=.o)


	# get_next_line Variables #
GNL_DIR		=	./get_next_line
GNL			=	$(GNL_DIR)/get_next_line.c 
GNL_O		=	$(GNL:.c=.o)

	# Includes flag for compilation #
INC			= 	-I$(LIBFT_DIR) -I$(STACK_DIR) -I$(GNL_DIR) -I$(LIST_DIR)

	# Compiling Variables #
CC			=	gcc
CFLAG		=	-Wall -Wextra -Werror
CLIB		=	ar -rc
RM			=	rm -f

	# Colors #
GREEN		=	\e[38;5;118m
YELLOW		=	\e[38;5;226m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(YELLOW)INFO$(RESET)]

%.o: %.c
	@ $(CC) $(CFLAG) $(D_FLAG) -c $< -o $(<:.c=.o) $(INC)

all: $(NAME)

$(NAME): $(OBJ) 
	@ $(CLIB) $(NAME) $(OBJ) 

list: bonus
bonus: clean $(LIST_O)
	@ $(CLIB) $(NAME) $(LIST_O)

stack: clean $(STACK_O)
	@ $(CLIB) $(NAME) $(STACK_O)

get_next_line: clean $(GNL_O)
	@ $(CLIB) $(NAME) $(GNL_O)

gnl: get_next_line

clean:
	@ $(RM) $(OBJ) $(LIST_O) $(STACK_O) $(GNL_O)

fclean:
	@ $(RM) $(OBJ) $(LIST_O) $(STACK_O) $(GNL_O)
	@ $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus info