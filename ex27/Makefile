# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 19:05:25 by abarthel          #+#    #+#              #
#    Updated: 2018/11/05 19:05:41 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = srcs/display_file

all : 
		gcc $(SRCS).c -c -o $(SRCS).o
		gcc $(SRCS).o -o $(NAME)

clean :
		/bin/rm -f $(SRCS).o

fclean : clean
		/bin/rm -f $(NAME)
