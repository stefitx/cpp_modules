# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atudor <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/04 15:24:20 by atudor            #+#    #+#              #
#    Updated: 2024/09/04 15:24:21 by atudor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Attack
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

OBJS = $(SRCS:.cpp=.o)
 
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS) Makefile
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

