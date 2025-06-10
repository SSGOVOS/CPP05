#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("Azzeddine", 2);
        std::cout << "Created: " << a.GetName() << " with grade " << a.GetGrade() << std::endl;
        a.incrementGrade();
        std::cout << "After increment: " << a.GetName() << " with grade " << a.GetGrade() << std::endl;
        a.incrementGrade();
        std::cout << "After increment 2nd time: " << a.GetName() << " with grade " << a.GetGrade() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b("Mehdi", 149);
        std::cout << "Created: " << b.GetName() << " with grade " << b.GetGrade() << std::endl;
        b.decrementGrade();
        std::cout << "After decrement: " << b.GetName() << " with grade " << b.GetGrade() << std::endl;
        b.decrementGrade();
        std::cout << "After decrement 2nd time: " << b.GetName() << " with grade " << b.GetGrade() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat c("Charlie", 0);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat d("Dave", 151);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}