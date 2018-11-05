# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 17:59:02 by abarthel          #+#    #+#              #
#    Updated: 2018/11/05 18:23:46 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strcmp.c \
	   srcs/ft_strlen.c \
	   srcs/ft_swap.c

O_FILES = ft_putchar.o \
		  ft_putstr.o \
		  ft_strcmp.o \
		  ft_strlen.o \
		  ft_swap.o

HEADERS = includes

all: $(NAME)

$(NAME):
		gcc $(SRCS) -c	
		ar rc $(NAME) $(O_FILES)
		ranlib $(NAME)

clean:
		rm -f $(O_FILES)

fclean: clean
		rm -f $(NAME)

re: fclean all
