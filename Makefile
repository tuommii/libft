# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtuomine <mtuomine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 12:40:34 by mtuomine          #+#    #+#              #
#    Updated: 2019/10/15 16:12:04 by mtuomine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Wextra -Werror
SOURCE_LIST	= ft_memset.c \
ft_putchar.c \
ft_strlen.c \
ft_putstr.c \
ft_putnbr.c \
ft_bzero.c \
ft_memcpy.c \
ft_memccpy.c \

OBJECTS	= $(SOURCE_LIST:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SOURCE_LIST) -I .
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)


main: all
	gcc $(FLAGS) -I . -c main.c
	gcc -o main main.o libft.a

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
