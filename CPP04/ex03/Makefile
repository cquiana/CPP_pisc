# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cquiana <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 13:16:36 by cquiana           #+#    #+#              #
#    Updated: 2021/03/22 18:18:39 by cquiana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Materia

SRCS	=	AMateria.cpp \
			MateriaSource.cpp \
			Ice.cpp \
			Cure.cpp \
			Character.cpp \
			main.cpp

HEADER	=	AMateria.hpp \
			MateriaSource.hpp \
			Ice.hpp \
			Cure.hpp \
			Character.hpp \
			IMateriaSource.hpp \
			ICharacter.hpp


OBJS = $(SRCS:.cpp=.o)

CL = clang++

FLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

%.o:%.cpp
	$(CL) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	@$(CL) $(OBJS) $(FLAGS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
	@echo "Project was remaked"

.PHONY: all re clean fclean
