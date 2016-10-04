# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbreahna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 11:56:17 by rbreahna          #+#    #+#              #
#    Updated: 2016/07/21 22:45:26 by rbreahna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ft_cat
FILE = ft_cat.c
HEADERS = includes
all:
	gcc -c -I$(HEADERS) -Wall -Wextra -Werror $(FILE)
	gcc ft_cat.o -o $(NAME)
clean:
	rm -f ft_cat.o
fclean:
	rm -f ft_cat.o ft_cat
