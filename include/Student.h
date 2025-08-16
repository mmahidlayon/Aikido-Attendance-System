#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
    std::string name;
    std::string rank;
    int attendanceCount;

public:
    //constructor
    Student(const std::string& studentName, std::string& rank);

    //getters
    std::string getName() const;
    std::string getRank() const;
    int getAttendance() const;

    //methods
    void addAttendance();
    bool isReadyForNextExam();
}

#endif
