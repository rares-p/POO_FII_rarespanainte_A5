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
    MathematicsGrade = grade;
}

void Student::SetEnglishGrade(float grade)
{
    EnglishGrade = grade;
}

void Student::SetHistoryGrade(float grade)
{
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
