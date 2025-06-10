#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
    private:
        std::string const name;
        int grade;

    public:
        Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(Bureaucrat const &other);
        Bureaucrat &operator=(Bureaucrat const &other);
		~Bureaucrat();

        std::string GetName() const;
		int GetGrade() const;

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Grade too high");
                }
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Grade too low");
                } 
        };

        void incrementGrade();
        void decrementGrade();
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& other);








#endif