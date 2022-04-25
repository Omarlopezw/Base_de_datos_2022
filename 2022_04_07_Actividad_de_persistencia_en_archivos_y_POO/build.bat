:: Compilo c+odigo objeto
g++ -Wall -std=c++11 -c .\src\Class_Student.cpp 
g++ -Wall -std=c++11 -c .\src\Class_Course.cpp
g++ -Wall -std=c++11 -c .\src\Class_AttendanceManagement.cpp
g++ -Wall -std=c++11 -c main.cpp 

:: Compilo el Binario
g++ Class_Student.o Class_Course.o Class_AttendanceManagement.o main.o -o main.exe

:: Limpio los códigos objeto
DEL .\*.o