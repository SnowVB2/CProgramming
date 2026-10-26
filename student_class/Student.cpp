#include "Student.hpp"
#include <iostream>
#include <string>

double Student::required_gpa = 2.5;
double Student::GPA_sum = 0;
int Student::total_students = 0;
int next_id = 0;

Student::Student(const std::string& n, double st_gpa) : name(n), gpa(st_gpa) {
    total_students++;
    GPA_sum += st_gpa;
    id = "U00000" + std::to_string(next_id);
    next_id += 5;
}

Student::~Student() {
    std::cout << "Destructor was called \n";
    total_students--;
    GPA_sum -= gpa;
}

bool Student::canGraduate() const {
    return gpa >= required_gpa;
}

void Student::printStudentInfo() const {
    std::cout << "Name: " << name;
    std::cout << "GPA: " << gpa;
    std::cout << "Can graduate: " << (canGraduate() ? "YES" : "NO");
}

double Student::getRequiredGPA() {
    return required_gpa;
}

void Student::setRequiredGPA(double new_gpa) {
    required_gpa = (new_gpa >= 2.5 && new_gpa <= 4.0) ? new_gpa : required_gpa;
}

int Student::getTotalStudents() {
    return total_students;
}

double getAverageGPA() {
    if (total_students == 0) {
        return 0;
    }
    return GPA_sum / total_students;
}

