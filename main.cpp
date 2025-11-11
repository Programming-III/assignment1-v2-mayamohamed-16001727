#include "Person.h"
#include "Course.h"
#include "Student.h"
#include "Instructor.h"
#include <string>
#include <iostream>
using namespace std;
 void Person::intialize(string name, int id){
    this->name=name;
    this->id=id;
}
void Person:: display(){
cout<<"name = "<< name<<endl;
cout<<"id= "<< id << endl;
}
string Person::getName(){
    return name;
}

void Student::display(){

cout<<"yearlevel= "<< yearLevel<<endl;
cout<<"major= "<<major<<endl;
}
void Instructor ::display(){
    cout<<department<<endl;
    cout<<experienceYears<<endl;
}
void Course:: addStudent(const Student& s){
    Student* newstudent= new Student[currentStudents]
    for(int i=0;i<currentstudents;i++){
        students[i]=newstudent[i]
    }
    newstudent[currentStudents]=s;
    delete students;
}
void Course::displayCourseInfo(){
    cout<< CourseCode <<endl;
    cout<< CourseName <<endl;
    cout<<maxStudents<<endl;
}


int main() {
  Student OmarNabil;
    Instructor Drlina;
    Course CS101;

    CS101.addstudent(OmarNabil);
    OmarNabil.display();
    Drlina.display();
 CS101.display();
 
    return 0;
}
