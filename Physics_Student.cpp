#include "Physics_Student.h"

Physics_Student::Physics_Student() : Student()
{
    concentration = "Biophysics";
}

Physics_Student::~Physics_Student() {}

void Physics_Student::print(std::ostream &out) const
{
    Student::print(out);
    out << "Program: Physics Student" << std::endl;
    out << "Concentration: " << concentration << std::endl;
    out << "----------------------" << std::endl;
}
