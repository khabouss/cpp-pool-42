NAME = bureaucrat
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Intern.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Form.cpp Bureaucrat.cpp main.cpp 
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
	rm -f 28C_shrubbery

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean
