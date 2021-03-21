# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cquiana <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/21 15:08:04 by cquiana           #+#    #+#              #
#    Updated: 2021/03/21 19:14:13 by cquiana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	wasteland

SRCS	=	AWeapon.cpp \
			PlasmaRifle.cpp \
			PowerFist.cpp \
			Enemy.cpp \
			SuperMutant.cpp \
			RadScorpion.cpp \
			Character.cpp \
			main.cpp

HEADER	=	AWeapon.hpp \
			PlasmaRifle.hpp \
			PowerFist.hpp \
			Enemy.hpp \
			SuperMutant.hpp \
			RadScorpion.hpp \
			Character.hpp

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
