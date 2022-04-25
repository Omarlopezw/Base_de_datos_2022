#ifndef Class_AttendanceManagement
#define Class_AttendanceManagement

#include <iostream>
#include <fstream>
#include "./Class_Student.hpp"
#include "./Class_Course.hpp"

using namespace std;


class AttendanceManagement
{
private:
    /* data */
public:

    void takeAttendance(Student *student,Course *course,string datetime,bool state);
    void showAttendance();

};

#endif

