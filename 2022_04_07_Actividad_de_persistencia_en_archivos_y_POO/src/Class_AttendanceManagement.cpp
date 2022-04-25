#include "../include/Class_AttendanceManagement.hpp"

void AttendanceManagement::takeAttendance(Student *student,Course *course,string datetime,bool state)
{
    //lectura del archivo
    ifstream testFile("AttendanceManagement.csv");

    bool fileStatus = testFile.good();

    testFile.close();

    //Se crea el archivo
    ofstream File;
    File.open("AttendanceManagement.csv",ofstream::app);

    if(!fileStatus)
    {
        //Cabeceras del archivo
        File << "Nombre, ";
        File << "Apellido, ";
        File << "ID del Alumno, ";
        File << "ID de la materia, ";
        File << "Materia, ";
        File << "Fecha, ";
        File << "Asistencia\n";
    }

    
        //Escritura de los datos en el archivo
        File << student->getName();
        File << " " << student->getSurname();
        File << " " << student->getIdentifier();
        File << " " << course->getIdentifier();
        File << " " << course->getName();
        File << " " << datetime;
        File << " " << state<<endl;

    File.close();

}

void AttendanceManagement::showAttendance()
{
    ifstream File;

    File.open("AttendanceManagement.csv");

    if(File.is_open())
    {
        cout << File.rdbuf();
        
    }

    File.close();
}