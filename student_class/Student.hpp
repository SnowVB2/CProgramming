#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>
#include <vector>

class Student {
    public:
        Student(const std::string& n, double st_gpa);

        // destructor
        ~Student();


        bool canGraduate() const;
        void printStudentInfo() const;

        static double getRequiredGPA();
        static void setRequiredGPA(double new_gpa);
        static int getTotalStudents();
        static double getAverageGPA();


    private:
        std::string name;
        double gpa;
        std::string id;

        static double required_gpa;
        static int total_students;
        static int next_id;
        static double GPA_sum;
}
#endif