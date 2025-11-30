#include "Student.h"

Student::Student()
{
    first_name = "N/A";
    last_name = "N/A";
    gpa = 0.0;
    grad_year = 0;
    grad_semester = "N/A";
    enrolled_year = 0;
    enrolled_semester = "N/A";
    level = "Undergrad";
}

Student::~Student() {}

void Student::print(std::ostream &out) const
{
    out << "--- Student Record ---" << std::endl;
    out << "Name: " << first_name << " " << last_name << std::endl;
    out << "GPA: " << std::fixed << std::setprecision(2) << gpa << std::endl;
    out << "Level: " << level << std::endl;
    out << "Enrolled: " << enrolled_semester << " " << enrolled_year << std::endl;
    out << "Expected Graduation: " << grad_semester << " " << grad_year << std::endl;
}
