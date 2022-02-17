# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 16:48:44 by mochegri          #+#    #+#              #
#    Updated: 2022/02/17 00:40:32 by mochegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Mommy

flags = -Wall -Wextra -Werror -std=c++98
SRCS = 	main.cpp  Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

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
