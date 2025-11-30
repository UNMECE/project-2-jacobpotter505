#ifndef PHYSICS_STUDENT_H
#define PHYSICS_STUDENT_H

#include <string>
#include "Student.h"

class Physics_Student : public Student
{
private:
    std::string concentration;

public:
    Physics_Student();
    ~Physics_Student() override;

    void setConcentration(const std::string &c) { concentration = c; }
    std::string getConcentration() const { return concentration; }

    void print(std::ostream &out) const override;
};

#endif
