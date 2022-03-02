NAME = karen
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = *.cpp

all: $(NAME)

$(NAME) :
	c++ $(FLAGS) $(SRC) -o $(NAME)

re: fclean $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

.PHONY: all re clean fclean