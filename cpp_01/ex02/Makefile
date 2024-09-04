# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atudor <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/04 15:23:47 by atudor            #+#    #+#              #
#    Updated: 2024/09/04 15:23:49 by atudor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)
 
 all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
