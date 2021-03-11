# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cquiana <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/11 11:15:16 by cquiana           #+#    #+#              #
#    Updated: 2021/03/11 13:13:19 by cquiana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = PhoneBook.cpp \
		Contact.cpp

HEADER = Contact.hpp

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
	@./phonebook

.PHONY: all re clean fclean
