# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/15 10:20:20 by chaueur           #+#    #+#              #
#    Updated: 2015/06/20 18:59:12 by chaueur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

FLAG = -Wall -Wextra -Werror -c

LIB = -lncurses

INC = -I ./inc
SRC = src/data.cpp \
	  src/main.cpp \
	  src/screen.cpp

SRC2 = src/class/Player.class.cpp \
	   src/class/Vessel.class.cpp

SRC0 = data.o \
	  main.o \
	  screen.o \
	  Player.class.o \
	  Vessel.class.o

all: $(NAME)

$(NAME):
	clang++ $(FLAG) $(SRC) $(SRC2) $(INC)
	clang++ -o $(NAME) $(SRC0) $(SRC02) $(LIB)

clean:
	rm -f $(SRC0)

fclean: clean
	rm -f $(NAME)

re: fclean all
