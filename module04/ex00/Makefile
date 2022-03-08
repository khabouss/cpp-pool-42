NAME = animal
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = WrongAnimal.cpp WrongCat.cpp Animal.cpp Cat.cpp Dog.cpp main.cpp 
CPP = c++

OBJS	= $(SRC:.cpp=.o)
all: $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CPP) $(FLAGS) -c $<

re: fclean $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean
