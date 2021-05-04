all : 
	clang++ Base.cpp A.cpp B.cpp C.cpp main.cpp -Wall -Werror -Wextra -std=c++98

clean : 
	rm -rf $(NAME)

fclean : clean
	rm -rf $(OBJD)

re : fclean all

.PHONY		:	all clean re fclean	