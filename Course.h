#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course{
private :
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    addStudent(const Student& s);
    void displayCourseInfo();
    Course(string courseCode,string courseName,int maxStudents );
    Course();
    ~Course();
};














#endif
