#ifndef COURSE_H
#define COURSE_H
#include "Student.h"
#include <string>
using namespace std;
class Course{
    private:
    string CourseCode;
    string CourseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    public:
    void addStudent(const Student& s);
    void displayCourseInfo();

    
};
#endif













#endif
