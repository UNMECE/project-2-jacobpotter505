#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include <iomanip>

class Student
{
private:
    std::string first_name;
    std::string last_name;
    double gpa;
    int grad_year;
    std::string grad_semester;
    int enrolled_year;
    std::string enrolled_semester;
    std::string level;

public:
    Student();
    virtual ~Student();

    void setFirstName(const std::string &f) { first_name = f; }
    void setLastName(const std::string &l) { last_name = l; }
    void setGPA(double g) { gpa = g; }
    void setGradYear(int y) { grad_year = y; }
    void setGradSemester(const std::string &s) { grad_semester = s; }
    void setEnrolledYear(int y) { enrolled_year = y; }
    void setEnrolledSemester(const std::string &s) { enrolled_semester = s; }
    void setLevel(const std::string &x) { level = x; }

    std::string getFirstName() const { return first_name; }
    std::string getLastName() const { return last_name; }
    double getGPA() const { return gpa; }
    int getGradYear() const { return grad_year; }
    std::string getGradSemester() const { return grad_semester; }
    int getEnrolledYear() const { return enrolled_year; }
    std::string getEnrolledSemester() const { return enrolled_semester; }
    std::string getLevel() const { return level; }

    virtual void print(std::ostream &out) const;
};

#endif

