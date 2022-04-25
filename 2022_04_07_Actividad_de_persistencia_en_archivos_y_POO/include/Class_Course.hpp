#ifndef Class_Course
#define Class_Course

#include <iostream>

using namespace std;

class Course
{
private:

    int identifier;
    string name;

public:

    void setIdentifier(int _identifier);
    void setName(string _name);
    int getIdentifier();
    string getName();

};


#endif