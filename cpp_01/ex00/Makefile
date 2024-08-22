# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atudor <atudor@student.42barcelon>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/22 20:23:10 by atudor            #+#    #+#              #
#    Updated: 2024/08/22 20:23:13 by atudor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombieland
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HEADERS = Zombie.hpp

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
