# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/20 17:31:32 by amirfatt          #+#    #+#              #
#    Updated: 2024/09/23 15:27:47 by amirfatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SOURCE = main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJECT = $(SOURCE:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECT)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	rm -r $(OBJECT)

fclean : clean 
	rm -f $(NAME)

re : fclean all

.PHONY : all fclean clean re