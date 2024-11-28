# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 15:24:52 by pleander          #+#    #+#              #
#    Updated: 2024/11/26 15:26:12 by pleander         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Fixed
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++11
SOURCES := main.cpp Fixed.cpp

OBJECTS := $(SOURCES:.cpp=.o)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
		$(CXX) $(OBJECTS) -I ./include -o $(NAME)

%.o: %.cpp
		$(CXX) $(CXXFLAGS) -I ./include -c $< -o $@

.PHONY: clean
clean:
		rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
		rm -f $(NAME)

.PHONY: re
re: fclean all
