#include <iostream>
#include "Student.h"
#include "GlobalFunctions.h"

using namespace std;

int main()
{
    Student a, b;
    a.SetName("Marcel");
    b.SetName("Gigel");

    a.SetMathematicsGrade(5);
    a.SetEnglishGrade(9);
    a.SetHistoryGrade(7.5);

    b.SetMathematicsGrade(8.7);
    b.SetEnglishGrade(10);
    b.SetHistoryGrade(4.2);

    cout << CompareName(a, b) << '\n';
    cout << CompareMathematicsGrade(a, b) << '\n';
    cout << CompareEnglishGrade(a, b) << '\n';
    cout << CompareHistoryGrade(a, b) << '\n';
    cout << CompareAverage(a, b);
}
