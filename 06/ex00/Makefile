NAME = convert

all : 
	clang++ Converter.cpp main.cpp -Wall -Werror -Wextra -std=c++98 -o $(NAME)

clean : 
	rm -rf $(NAME)

fclean : clean
	rm -rf $(OBJD)

re : fclean all

.PHONY		:	all clean re fclean	