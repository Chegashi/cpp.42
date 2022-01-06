# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 16:48:44 by mochegri          #+#    #+#              #
#    Updated: 2022/01/04 16:16:16 by mochegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

flags = -Wall -Wextra -Werror
SRCS = 	megaphone.cpp


MAND = $(SRCS)

$(NAME): $(SRCS)
	@clang++ $(flags) $(SRCS) -o $(NAME)

all : $(NAME)

clean:
	@rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:		fclean all

test_1:	all
	./megaphone "shhhhh... I think the students are asleep..."

test_2 : all
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."

test_3 : all
	./megaphone
