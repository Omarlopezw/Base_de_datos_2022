//Llamado de las bibliotecas
#include <iostream>
#include "./include/Class_Student.hpp"
#include "./include/Class_Course.hpp"
#include "./include/Class_AttendanceManagement.hpp"

using namespace std;

int main()
{
    //Se crea el objeto estudiante
    Student* student = new Student();
    student->setIdentifier(1);
    student->setName("Juan");
    student->setSurname("Perez");
    
    //Datos del curso
    Course* course = new Course();
    course->setIdentifier(1);
    course->setName("Algebra");

    //Llamado de las funciones para el pasaje de parámetros
    AttendanceManagement* attendanceManagement = new AttendanceManagement();
    attendanceManagement->takeAttendance(student, course, "2021-06-08", true);
    attendanceManagement->showAttendance();

    
    //Se desasigna la memoria dinámica
    delete student;
    delete course;
    delete attendanceManagement;

    return 0;
}