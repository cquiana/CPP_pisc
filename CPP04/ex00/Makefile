# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cquiana <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/21 12:27:21 by cquiana           #+#    #+#              #
#    Updated: 2021/03/21 14:56:49 by cquiana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorph

SRCS = Sorcerer.cpp \
		Victim.cpp \
		Peon.cpp \
		Hobbit.cpp \
		main.cpp

HEADER = Sorcerer.hpp \
		Peon.hpp \
		Victim.hpp \
		Hobbit.hpp

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
