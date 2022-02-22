# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 16:48:44 by mochegri          #+#    #+#              #
#    Updated: 2022/02/22 21:50:37 by mochegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = base

flags = -Wall -Wextra -Werror -std=c++98
SRCS = 	main.cpp Span.cpp

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

test2:
	@c++ $(flags) main2.cpp -o $(NAME)
	./$(NAME)	
