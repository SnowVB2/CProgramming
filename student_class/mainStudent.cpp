#include "Student.hpp"
#include <iostream>
#include <string>

int main(void) {
    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;

    Student bob("Bob", 3.1);
    Student alice("Alice", 2.1);

    bob.printStudentInfo();
    alice.printStudentInfo();

    std::cout << "Required GPA: " << Student::getRequiredGPA << std::endl;

    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;

    std::cout << "Avg GPA: " << Student::getAverageGPA() << std::endl;

    return 0;
}
