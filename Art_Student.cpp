#include "Art_Student.h"

Art_Student::Art_Student() : Student()
{
    art_emphasis = "Art Studio";
}

Art_Student::~Art_Student() {}

void Art_Student::print(std::ostream &out) const
{
    Student::print(out);
    out << "Program: Art Student" << std::endl;
    out << "Art Emphasis: " << art_emphasis << std::endl;
    out << "----------------------" << std::endl;
}
