#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("Taha", 120);
        std::cout << bureaucrat.getName() << std::endl;
        bureaucrat.decrementGrade(2);
        std::cout << bureaucrat << std::endl;
        Bureaucrat bureaucrat_2 = bureaucrat;
        std::cout << bureaucrat_2.getGrade() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}