#ifndef FORM
# define FORM

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:

	Form( const std::string &name, int gradeToSign, int gradeToExecute );
	Form( const Form &src );
	~Form( void );

	Form	&operator=( const Form &rhs );

	const std::string	&getName( void ) const;
	int					getSignGrade( void ) const;
	int					getExecuteGrade( void ) const;
	bool				isSigned( void ) const;

	void	checkGrades( void ) const ;
	void	checkExecutability( const Bureaucrat &bureaucrat ) const ;
	bool	beSigned( const Bureaucrat &bureaucrat );

private:
	Form( void );
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

public:

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

	class CantExecuteForm : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The form can't be executed");
		}
	};

};

std::ostream	&operator<<( std::ostream &ostr, const Form &instance );

#endif