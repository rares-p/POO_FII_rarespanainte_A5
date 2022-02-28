#include "Student.h"
#include <cstring>

char* Student::GetName()
{
    return name;
}

void Student::SetName(char NumeNou[])
{
    strcpy(name, NumeNou);
}

void Student::SetMathematicsGrade(float grade)
{
    if(grade >= 1 && grade <= 10)
        MathematicsGrade = grade;
}

void Student::SetEnglishGrade(float grade)
{
    if(grade >= 1 && grade <= 10)
        EnglishGrade = grade;
}

void Student::SetHistoryGrade(float grade)
{
    if(grade >= 1 && grade <= 10)
        HistoryGrade = grade;
}

float Student::GetMathematicsGrade()
{
    return MathematicsGrade;
}

float Student::GetEnglishGrade()
{
    return EnglishGrade;
}


float Student::GetHistoryGrade()
{
    return HistoryGrade;
}

float Student::AverageGrade()
{
    return (MathematicsGrade + EnglishGrade + HistoryGrade) / 3;
}
