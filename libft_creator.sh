# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julcarva <julcarva@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/15 17:54:11 by julcarva          #+#    #+#              #
#    Updated: 2021/02/12 17:05:38 by julcarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c

ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

ranlib libft.a
