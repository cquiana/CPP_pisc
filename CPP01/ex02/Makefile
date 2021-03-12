# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cquiana <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/12 13:14:10 by cquiana           #+#    #+#              #
#    Updated: 2021/03/12 14:19:37 by cquiana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = Zombie.cpp \
		ZombieEvent.cpp \
		main.cpp

HEADER = Zombie.hpp ZombieEvent.cpp

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

run: clean
	@./zombie

.PHONY: all re clean fclean
