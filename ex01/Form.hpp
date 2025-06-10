#ifndef FORM_HPP
#define FORM_HPP


#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"


class Form
{
    private:
        std::string const name;
        bool f_signed;
        const int grade_sign;
        const int grade_execute;

    public:
        Form();
		Form(const std::string& name, int grade_sign, int grade_execute);
		Form(const Form& other);
		~Form();

		Form& operator=(const Form& other);

        class GradeTooHighException : public exception
        {
            public:
                const char* what() const throw()
                {
                    return("Form grade too high")
                }
        };

        class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Form Grade too low";
				}
		};

        std::string GetName() const;
		bool ifsigned() const;
		int GetGradeSign() const;
		int GetGradeExecute() const;

        void beSigned(Bureaucrat& bureau);
}

std::ostream& operator<<(std::ostream& stream, const Form& other);

#endif