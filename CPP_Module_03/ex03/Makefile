# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 16:48:44 by mochegri          #+#    #+#              #
#    Updated: 2022/02/12 06:37:11 by mochegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

flags = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
SRCS = 	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

MAND = $(SRCS)

$(NAME): $(SRCS)
	@clang++ $(flags) $(SRCS) -o $(NAME)

all : $(NAME)

clean:
	@rm -f *.o

fclean:	clean
	@rm -f $(NAME)

re:		fclean all

test: all
	./$(NAME)
