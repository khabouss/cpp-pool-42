#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat(void);
    Bureaucrat( const std::string &name, int grade );
	Bureaucrat( const Bureaucrat &bureaucrat );
	~Bureaucrat( void );
	Bureaucrat	&operator=( const Bureaucrat &bureaucrat );

	const std::string	&getName( void ) const;
	int					getGrade( void ) const;

	void	incrementGrade( int quantity );
	void	decrementGrade( int quantity );

    void    checkGrade(void) const;

	bool	signForm(Form &form ) const;

    class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The grade you set is too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The grade you set is too low");
		}
	};

};

std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & instance);

#endif