NAME=Animal

FLAG=-Werror -Wextra -Wall -std=c++98

CC=clang++

SRC=main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

all:$(NAME)

$(NAME):
	$(CC) $(FLAG) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.Phony: all fclean re