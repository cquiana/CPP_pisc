# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cquiana <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/28 07:45:19 by cquiana           #+#    #+#              #
#    Updated: 2021/03/28 07:45:27 by cquiana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	array

SRCS	=	main.cpp

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
