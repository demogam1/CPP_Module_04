NAME=Animal

W_NAME=WrongAnimal

CC=clang++

FLAG=-Wall -Werror -Wextra -std=c++98

SRC=main.cpp Animal.cpp Cat.cpp Dog.cpp

W_SRC=WrongCat.cpp WrongAnimal.cpp w_main.cpp

$(NAME):
	$(CC) $(SRC) $(FLAG) -o $(NAME)

$(W_NAME):
	$(CC) $(W_SRC) $(FLAG) -o $(W_NAME) 

true:$(NAME) 

wrong:$(W_NAME)

all:true wrong

fclean:
	rm $(NAME) $(W_NAME)

re:fclean all

.Phony: all fclean re
