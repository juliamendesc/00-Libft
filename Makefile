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

	# Library Name #
NAME		=	libft.a

	# Main (Mandatory) Variables #
LIBFT_DIR	=	./
SRC			=	$(STACK) $(GNL) $(GNL_FDF) $(LIST) $(FREE) $(IS) $(STACK_PUSH_SWAP) $(MATH) $(MEM) $(PUT) $(STRING) \
				$(TO)
OBJ			=	$(SRC:.c=.o)

	# linked_list Variables #
LIST_DIR	=	./sources/lst
LIST		=	./sources/lst/original/ft_lstadd_back.c \
				./sources/lst/original/ft_lstadd_front.c \
				./sources/lst/original/ft_lstclear.c \
				./sources/lst/original/ft_lstdelone.c \
				./sources/lst/original/ft_lstiter.c \
				./sources/lst/original/ft_lstlast.c \
				./sources/lst/original/ft_lstmap.c \
				./sources/lst/original/ft_lstnew.c \
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

MATH 			= 	./sources/math/ft_abs.c ./sources/math/ft_abs_float.c \
							./sources/math/ft_min.c
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
					./sources/string/ft_substr.c ./sources/string/ft_strsplit.c \
					./sources/string/ft_wdcounter.c ./sources/string/ft_strnew.c
STRING_O		=	$(STRING:.c=.o)

TO 				= 	./sources/to/ft_atoi.c ./sources/to/ft_itoa.c ./sources/to/ft_tolower.c \
					./sources/to/ft_toupper.c ./sources/to/ft_atoll.c ./sources/to/ft_atoi_base.c
TO_O			=	$(YO:.c=.o)

	# get_next_line Variables #
GNL_DIR		=	./get_next_line
GNL			=	$(GNL_DIR)/get_next_line.c
GNL_O		=	$(GNL:.c=.o)

	# get_next_line_fdf Variables #
GNL_FDF_DIR		=	./get_next_line_fdf
GNL_FDF			=	$(GNL_FDF_DIR)/get_next_line_fdf.c $(GNL_FDF_DIR)/get_next_line_utils_fdf.c
GNL_FDF_O		=	$(GNL:.c=.o)

	# Includes flag for compilation #
INC			= 	-I$(LIBFT_DIR) -I$(STACK_DIR) -I$(GNL_DIR) -I$(GNL_FDF_DIR) -I$(LIST_DIR)

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

get_next_line_fdf: clean $(GNL_FDF_O)
	@ $(CLIB) $(NAME) $(GNL_FDF_O)

gnl: get_next_line

clean:
	@ $(RM) $(OBJ) $(LIST_O) $(STACK_O) $(GNL_O) $(GNL_FDF_O)

fclean:
	@ $(RM) $(OBJ) $(LIST_O) $(STACK_O) $(GNL_O) $(GNL_FDF_O)
	@ $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus info
