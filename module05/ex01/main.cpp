#include "Form.hpp"

int main()
{
    try {
        Bureaucrat taha("Taha", 119);
        Form form("wati9at l2isti9lal", 120, 110);
        //form.beSigned(taha);
        taha.signForm(form);
        std::cout << form.isSigned() << std::endl;
        std::cout << form.getName() << std::endl;
        std::cout << form.getSignGrade() << std::endl;
        std::cout << form << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}