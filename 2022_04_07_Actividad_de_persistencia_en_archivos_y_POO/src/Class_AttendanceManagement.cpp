#include "../include/Class_AttendanceManagement.hpp"

void AttendanceManagement::takeAttendance(Student *student,Course *course,string datetime,bool state)
{
    //lectura del archivo
    ifstream testFile("AttendanceManagement.csv");

    //Se comprueba si el archivo esta en buen estado
    bool fileStatus = testFile.good();

    testFile.close();

    //Se crea el archivo
    ofstream File;
    File.open("AttendanceManagement.csv",ofstream::app);

    if(!fileStatus)
    {
        //Cabeceras del archivo
        File    << "Nombre,"
                << "Apellido,"
                << "ID-Alumno,"
                << "ID-Materia,"
                << "Materia,"
                << "Fecha,"
                << "Asistencia\n";
    }

    File    << student->getName() << ","
            << student->getSurname() << ","
            << student->getIdentifier() << ","
            << course->getIdentifier() << ","
            << course->getName() << ","
            << datetime << ","
            << state << "\n ";

    File.close();

}

void AttendanceManagement::showAttendance()
{
    ifstream File;
    string row;

    File.open("AttendanceManagement.csv");

    bool fileStatus = File.good();

    if(fileStatus)
    {
        //Se recorre el archivo y se muestra por pantalla cada fila
        while(File >> row)
        {
            cout << row <<endl;
        }
    }

    else
    {
        cout << "\nNo se ha encontrado el archivo"<<endl;
    }

//Otra manera de leer el archivo y mostrarlo por pantalla
    // if(File.is_open())
    // {
    //     cout << File.rdbuf();
        
    // }

    File.close();
}