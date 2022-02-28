#include "Student.h"
#include <cstring>

int CompareName(Student a, Student b)
{
    char* nume1 = a.GetName();
    char *nume2 = b.GetName();
    if(strcmp(nume1, nume2) == 0)
        return 0;
    if(strcmp(nume1, nume2) < 0)
        return -1;
    return 1;
}

int CompareEnglishGrade(Student a, Student b)
{
    float nota1 = a.GetEnglishGrade(), nota2 = b.GetEnglishGrade();
    if(nota1 == nota2)
        return 0;
    if(nota1 > nota2)
        return 1;
    return -1;
}

int CompareMathematicsGrade(Student a, Student b)
{
    float nota1 = a.GetMathematicsGrade(), nota2 = b.GetMathematicsGrade();
    if(nota1 == nota2)
        return 0;
    if(nota1 > nota2)
        return 1;
    return -1;
}

int CompareHistoryGrade(Student a, Student b)
{
    float nota1 = a.GetHistoryGrade(), nota2 = b.GetHistoryGrade();
    if(nota1 == nota2)
        return 0;
    if(nota1 > nota2)
        return 1;
    return -1;
}

int CompareAverage(Student a, Student b)
{
    float nota1 = a.AverageGrade(), nota2 = b.AverageGrade();
    if(nota1 == nota2)
        return 0;
    if(nota1 > nota2)
        return 1;
    return -1;
}
