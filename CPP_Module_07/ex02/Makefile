# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 16:48:44 by mochegri          #+#    #+#              #
#    Updated: 2022/02/21 16:41:21 by mochegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = base

flags = -Wall -Wextra -Werror -std=c++98 -g
SRCS = 	main.cpp

MAND = $(SRCS)

$(NAME): $(SRCS)
	@c++ $(flags) $(SRCS) -o $(NAME)

all : $(NAME)

clean:
	@rm -f *.o

fclean:	clean
	@rm -f $(NAME)

re:		fclean all

test: all
	./$(NAME)
