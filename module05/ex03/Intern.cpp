#include "Intern.hpp"
Intern::Intern(void)
{

    //std::cout << "Default constructor for Intern called" << std::endl;
    return;
}

Intern::Intern(Intern const &src)
{

    std::cout << "Copy constructor for Intern called" << std::endl;
    *this = src;
    return;
}

Intern::~Intern(void)
{

    //std::cout << "Destructor for Intern called" << std::endl;
    return;
}

Intern &Intern::operator=(Intern const &rhs)
{
    (void)rhs;

    std::cout << "Assignement operator for Intern called" << std::endl;
    return *this;
}

Form *Intern::makeForm(const std::string &formName, const std::string &target) const
{
    t_formList forms[] =
        {
            {"presidential pardon", new PresidentialPardonForm(target)},
            {"robotomy request", new RobotomyRequestForm(target)},
            {"shrubbery creation", new ShrubberyCreationForm(target)},
            {"", NULL}};
    Form *resultForm = NULL;
    for (int i = 0; forms[i].formType != NULL; i++)
    {
        if (forms[i].formName == formName)
            resultForm = forms[i].formType;
        else
            delete forms[i].formType;
    }
    std::string res = (resultForm == NULL) ? "Intern did not find the form " : "Intern creates ";
    std::cout << res << formName << std::endl;
    return resultForm;
}

std::ostream &operator<<(std::ostream &ostr, Intern const &instance)
{
    (void)instance;
    ostr << "Intern" << std::endl;
    return ostr;
}