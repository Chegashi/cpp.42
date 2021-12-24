# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 16:48:44 by mochegri          #+#    #+#              #
#    Updated: 2021/12/22 19:03:02 by mochegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = annuaire

flags = -Wall -Wextra -Werror
SRCS = main.cpp contact.class.cpp


MAND = $(SRCS)

$(NAME): $(SRCS)
	@clang++ $(flags) $(SRCS) -o $(NAME)

all : $(NAME)

clean:
	@rm -f $(SRC:.c=.o) $(MAND:.c=.o)

fclean:	clean
	rm -f $(NAME)

re:		fclean all

