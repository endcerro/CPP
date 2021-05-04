NAME  = a.out

all : 
	clang++ main.cpp -Wall -Werror -Wextra -std=c++98 -o $(NAME)

clean : 
	rm -rf $(NAME)

re : clean all

.PHONY		:	all clean re