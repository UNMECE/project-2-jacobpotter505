#ifndef ART_STUDENT_H
#define ART_STUDENT_H

#include <string>
#include "Student.h"

class Art_Student : public Student
{
private:
    std::string art_emphasis;

public:
    Art_Student();
    ~Art_Student() override;

    void setArtEmphasis(const std::string &e) { art_emphasis = e; }
    std::string getArtEmphasis() const { return art_emphasis; }

    void print(std::ostream &out) const override;
};

#endif
