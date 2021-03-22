# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cquiana <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/21 22:46:33 by cquiana           #+#    #+#              #
#    Updated: 2021/03/22 08:54:24 by cquiana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Squad

SRCS	=	Squad.cpp \
			AssaultTerminator.cpp \
			TacticalMarine.cpp \
			main.cpp

HEADER	=	ISquad.hpp \
			ISpaceMarine.hpp \
			AssaultTerminator.hpp \
			TacticalMarine.hpp \
			Squad.hpp

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
