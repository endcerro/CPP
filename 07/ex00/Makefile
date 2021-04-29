all : 
	clang++ *.cpp -Wall -Werror -Wextra -std=c++98

clean : 
	rm -rf $(NAME)

fclean : clean
	rm -rf $(OBJD)

re : fclean all

.PHONY		:	all clean re fclean	