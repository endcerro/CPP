# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/06 16:24:25 by edal--ce          #+#    #+#              #
#    Updated: 2021/04/06 14:16:03 by edal--ce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = phonebook
DIRSRC = srcs
OBJD = objs
INCLUDE = head

SRC = 	main.cpp 	\
		book.cpp 	\
		contact.cpp \


OBJ = $(SRC:.cpp=.o)
OBJS = $(OBJ:%=$(OBJD)/%)

CFLAGS =# -Wall -Wextra -Werror

CC = clang++

$(NAME) : $(OBJD) $(OBJS)
	$(CC) -I ./$(INCLUDE) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJD)	:
	@mkdir $(OBJD)

$(OBJD)/%.o	:	$(DIRSRC)/%.cpp
	$(CC) -I ./$(INCLUDE) $(CFLAGS) -o $@ -c $<

all : $(NAME)

clean : 
	rm -rf $(NAME)

fclean : clean
	rm -rf $(OBJD)

re : fclean all

.PHONY		:	all clean re fclean bonus minfclean reft