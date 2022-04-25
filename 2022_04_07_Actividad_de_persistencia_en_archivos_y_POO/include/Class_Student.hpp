#ifndef Class_Student
#define Class_Student

#include <iostream>

using namespace std;

class Student
{
private:

    int identifier;
    string name;
    string surname;

public:

    void setIdentifier(int _identifier);
    void setName(string _name);
    void setSurname(string _surname);
    int getIdentifier();
    string getName();
    string getSurname();

    // class_student(/* args */);
    // ~class_student();
};

#endif

