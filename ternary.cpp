#include <iostream>

using namespace std;

int main()
{
    int grade = 97;
    char letterGrade;
    bool withdrawn = true;

    if (grade >= 65)
    {
        letterGrade = 'P';
    }
    else
    {
        letterGrade = 'F';
    }
    letterGrade = (grade >= 65) ? 'P' : 'F';

    if (grade >= 65)
    {
        letterGrade = 'P';
    }
    else
    {
        if (withdrawn)
        {
            letterGrade = 'W';
        }
        else
        {
            letterGrade = 'F';
        }
    }
    letterGrade = (grade >= 65) ? 'P' : (withdrawn) ? 'W'
                                                    : 'F';

    if (grade >= 65)
    {
        if (withdrawn)
        {
            letterGrade = 'W';
        }
        else
        {
            letterGrade = 'P';
        }
    }
    else
    {
        letterGrade = 'F';
    }
    letterGrade = (grade >= 65) ? (withdrawn) ? 'W' : 'P' : 'F';

    if (grade >= 90)
        cout << "You get an A" << endl;
    else if (grade >= 80)
        cout << "You get a B" << endl;
    else if (grade >= 70)
        cout << "You get a C" << endl;
    else if (grade >= 60)
        cout << "You get a D" << endl;
    else
        cout << "You get an F" << endl;

    letterGrade = (grade >= 90) ? 'A' : (grade >= 80) ? 'B'
                                    : (grade >= 70)   ? 'C'
                                    : (grade >= 60)  ? 'D'
                                                      : 'F';
}