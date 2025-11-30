#include <iostream>
#include <vector>
#include <fstream>
#include "Art_Student.h"
#include "Physics_Student.h"

using namespace std;

struct StudentData
{
    string first;
    string last;
    double gpa;
    int e_year;
    string e_sem;
    int g_year;
    string g_sem;
    string level;
    string extra;
};

int main()
{
    vector<Art_Student*> art_students;
    vector<Physics_Student*> physics_students;

    for (int i = 0; i < 5; i++)
        art_students.push_back(new Art_Student());

    for (int i = 0; i < 5; i++)
        physics_students.push_back(new Physics_Student());

    StudentData artData[5] =
    {
        {"Lily","Chen",3.9,2023,"Fall",2027,"Spring","Undergrad","Art History"},
        {"James","Rivera",3.5,2022,"Fall",2026,"Spring","Undergrad","Art Studio"},
        {"Sara","Diaz",3.8,2021,"Spring",2025,"Fall","Undergrad","Art Education"},
        {"David","Lee",3.2,2020,"Fall",2024,"Spring","Undergrad","Art Studio"},
        {"Amira","Jones",3.6,2023,"Spring",2027,"Fall","Undergrad","Art History"}
    };

    StudentData physicsData[5] =
    {
        {"Omar","Khan",3.7,2022,"Spring",2026,"Fall","Undergrad","Earth and Planetary Sciences"},
        {"Maria","Smith",3.9,2021,"Fall",2025,"Spring","Undergrad","Biophysics"},
        {"Jacob","Stone",3.4,2020,"Fall",2024,"Fall","Undergrad","Biophysics"},
        {"Hana","Yoon",3.85,2023,"Spring",2027,"Spring","Undergrad","Earth and Planetary Sciences"},
        {"Leo","Martinez",3.1,2022,"Fall",2026,"Spring","Undergrad","Biophysics"}
    };

    for (int i = 0; i < 5; i++)
    {
        art_students[i]->setFirstName(artData[i].first);
        art_students[i]->setLastName(artData[i].last);
        art_students[i]->setGPA(artData[i].gpa);
        art_students[i]->setEnrolledYear(artData[i].e_year);
        art_students[i]->setEnrolledSemester(artData[i].e_sem);
        art_students[i]->setGradYear(artData[i].g_year);
        art_students[i]->setGradSemester(artData[i].g_sem);
        art_students[i]->setLevel(artData[i].level);
        art_students[i]->setArtEmphasis(artData[i].extra);
    }

    for (int i = 0; i < 5; i++)
    {
        physics_students[i]->setFirstName(physicsData[i].first);
        physics_students[i]->setLastName(physicsData[i].last);
        physics_students[i]->setGPA(physicsData[i].gpa);
        physics_students[i]->setEnrolledYear(physicsData[i].e_year);
        physics_students[i]->setEnrolledSemester(physicsData[i].e_sem);
        physics_students[i]->setGradYear(physicsData[i].g_year);
        physics_students[i]->setGradSemester(physicsData[i].g_sem);
        physics_students[i]->setLevel(physicsData[i].level);
        physics_students[i]->setConcentration(physicsData[i].extra);
    }

    ofstream outfile("student_info.dat");

    for (int i = 0; i < art_students.size(); i++)
        art_students[i]->print(outfile);

    for (int i = 0; i < physics_students.size(); i++)
        physics_students[i]->print(outfile);

    outfile.close();

    for (int i = 0; i < art_students.size(); i++)
        delete art_students[i];

    for (int i = 0; i < physics_students.size(); i++)
        delete physics_students[i];

    return 0;
}