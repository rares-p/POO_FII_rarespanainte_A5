class Student
{
    char name[50];
    float MathematicsGrade;
    float EnglishGrade;
    float HistoryGrade;
public:
    char* GetName();
    void SetName(char *);

    void SetMathematicsGrade(float grade);
    float GetMathematicsGrade();

    void SetEnglishGrade(float grade);
    float GetEnglishGrade();

    void SetHistoryGrade(float grade);
    float GetHistoryGrade();

    float AverageGrade();
};
