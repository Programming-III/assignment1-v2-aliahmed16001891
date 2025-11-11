#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student{
private:
    int yearLevel;
    string major;
public:
    Student(int yearLevel, string major );
    Student();
    ~Student();
    string getMajor();
    int getYearLevel();
};













#endif
