#include "../include/Student.h"

Student::Student (const std::string& studentName, const std::string& rank)
    : name(studentName, rank(rank), attendanceCount (0) ) {}

//getter
std::string Student::getName() const
{
    return name;
}

std::string Student::getRank() const
{
    return rank;
}

int Student::getAttendance() const
{
    return attendanceCount;
}

//Methods
void addAttendance()
{
    attendanceCount++;
}

bool isReadyForNextExam()
{
    if (rank == "6th kyu") return attendanceCount >= 45;
    if (rank == "5th kyu") return attendanceCount >= 60;
    if (rank == "4th kyu") return attendanceCount >= 75;
    if (rank == "3rd kyu") return attendanceCount >= 75;
    if (rank == "2nd kyu") return attendanceCount >= 90;
    return false; 
}