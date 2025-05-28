# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atudor <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/11 20:00:26 by atudor            #+#    #+#              #
#    Updated: 2025/05/28 18:48:34 by atudor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CXX= c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS= main.cpp Bureaucrat.cpp

OBJ= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Makefile Bureaucrat.hpp
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp Makefile Bureaucrat.hpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

