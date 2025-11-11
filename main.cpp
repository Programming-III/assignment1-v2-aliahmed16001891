#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person::Person(string name, int id){
this->name=name;
this->id=id;
}
Person:: Person(){
name="noname";
id=0;
}
Person::~Person(){
}
void Person::diplay(){
cout<<"Name: "<< name<<"(ID: )"<<id<<endl;

}
string Person::getName(){
return name;
}
int Person::getId(){
return id;
}





// ==================== Student Class Implementation ====================
Student:: Student(int yearLevel, string major){
this->major=major;
this->yearLevel=yearLevel;
}
Student:: Student(){
yearLevel=0;
major="no major";
}
Student::~Student(){
}
string Student::getMajor(){
return major;
}
int Student::getYearLevel(){
return yearLevel;
}

// ==================== Instructor Class Implementation ====================

Instructor:: Instructor(string department,int experienceYears){
this->department=department;
this->experienceYears=experienceYears;
}
Instructor:: Instructor(){
    department="no department";
    experienceYears=0;
}
 Instructor::~Instructor(){
    }
string Instructor::getDepartment(){
return department
}
int Instructor::getExperienceLevel(){
return experienceYears;
}

// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {


    return 0;
}
