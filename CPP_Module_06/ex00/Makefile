# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 16:48:44 by mochegri          #+#    #+#              #
#    Updated: 2022/02/19 03:59:56 by mochegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Scalar

flags = -Wall -Wextra -Werror -std=c++98
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
	./$(NAME) 's'
	@echo "***********"
	./$(NAME) 'a'
	@echo "***********"
	./$(NAME) 0
	@echo "***********"
	./$(NAME) -42
	@echo "***********"
	./$(NAME) 42
	@echo "***********"
	./$(NAME) 0.0f
	@echo "***********"
	./$(NAME) -4.2f
	@echo "***********"
	./$(NAME) 4.2f
	@echo "***********"
	./$(NAME) -inff
	@echo "***********"
	./$(NAME) +inff
	@echo "***********"
	./$(NAME) nanf
	@echo "***********"
	./$(NAME) 0.0
	@echo "***********"
	./$(NAME) -4.2
	@echo "***********"
	./$(NAME) 4.2
	@echo "***********"
	./$(NAME) -inf
	@echo "***********"
	./$(NAME) +inf
	@echo "***********"
	./$(NAME) nan
