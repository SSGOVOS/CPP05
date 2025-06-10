#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("No name"), grade_sign(150), grade_execute(150)
{
	this->f_signed = false;
}

Form::Form(const std::string& name, int grade_sign, int grade_execute) : name(name),
	grade_sign(grade_sign), grade_execute(grade_execute)
{
	f_signed = false;
	if (grade_sign < 1 || grade_execute < 1)
		throw GradeTooHighException();
	else if (grade_sign > 150 || grade_execute > 150)
		throw GradeTooLowException();
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		f_signed = other.f_signed;
	return (*this);
}

Form::Form(const Form& other) : name(other.name), grade_sign(other.grade_sign),
		grade_execute(other.grade_execute)
{
	*this = other;
}

Form::~Form(){}

std::string Form::GetName() const
{
	return (this->name);
}

bool Form::IsSigned() const
{
	return (f_signed);
}

int Form::GetGradesign() const
{
	return (this->grade_sign);
}

int Form::GetGradeExecute() const
{
	return (this->grade_execute);
}

void Form::beSigned(Bureaucrat& bureau)
{
    if(bureau.GetGrade() > this->grade_sign)
        throw GradeTooLowException
    f_signed = true;
    std::cout << bureau.GetName() << " signed " << this->name << std::endl;
}

std::ostream& operator<<(std::ostream& stream, const Form& other)
{
	stream << "Form name : " << other.GetName() << std::endl;
	stream << "Grade required to sign : " << other.GetGradesign() << std::endl;
	stream << "Grade required to execute : " << other.GetGradeExecute() << std::endl;
	stream << "Is signed : " << other.IsSigned();
	return (stream);
}