# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edal <edal@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/15 17:48:02 by edal              #+#    #+#              #
#    Updated: 2020/11/15 17:52:32 by edal             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = megaphone
DIRSRC = srcs
OBJD = objs


SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)
OBJS = $(OBJ:%=$(OBJD)/%)

CFLAGS = -Wall -Wextra -Werror

CC = clang++

$(NAME) : $(OBJD) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJD)	:
	@mkdir $(OBJD)

$(OBJD)/%.o	:	$(DIRSRC)/%.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

all : $(NAME)

test : all
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

clean : 
	rm -rf $(NAME)

fclean : clean
	rm -rf $(OBJD)

re : fclean all

.PHONY		:	all clean re fclean bonus minfclean reft