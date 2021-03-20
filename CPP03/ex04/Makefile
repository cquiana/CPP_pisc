# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cquiana <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/17 08:12:25 by cquiana           #+#    #+#              #
#    Updated: 2021/03/20 07:18:16 by cquiana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = SuperTrap

SRCS = FragTrap.cpp \
		ScavTrap.cpp \
		ClapTrap.cpp \
		NinjaTrap.cpp \
		SuperTrap.cpp \
		main.cpp

HEADER = FragTrap.hpp \
		ClapTrap.hpp \
		ScavTrap.hpp \
		NinjaTrap.hpp \
		SuperTrap.hpp

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
