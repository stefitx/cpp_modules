# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atudor <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 19:35:19 by atudor            #+#    #+#              #
#    Updated: 2024/07/17 19:35:22 by atudor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp Makefile
	$(CPP) $(FLAGS) -c $<

clean:
	rm -f $(NAME) $(OBJS)

fclean: clean

re: fclean all

.PHONY: all clean fclean re