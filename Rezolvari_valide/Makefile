# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbreahna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 11:56:17 by rbreahna          #+#    #+#              #
#    Updated: 2016/07/19 21:54:49 by rbreahna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARIE = libft.a
FUNCTII = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADERS = includes
all:
	gcc -c -I$(HEADERS) -Wall -Wextra -Werror $(FUNCTII)
	ar rc $(LIBRARIE) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(LIBRARIE)
clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
fclean:
	rm -f libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o libft.a
re: fclean all
