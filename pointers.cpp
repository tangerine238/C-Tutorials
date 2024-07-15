#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> courses = {"Chemistry", "Physics", "Calculus"};
    vector<string> *coursesPtr = &courses;

    // arrow operator (* ). = ->
    coursesPtr->push_back("French");

    for (size_t i = 0; i < courses.size(); i++)
    {
        cout << courses[i] << " ";
    }
    cout << endl;
    for (size_t z = 0; z < (*coursesPtr).size(); z++)
    {
        cout << (*coursesPtr)[z] << " ";
        cout << coursesPtr->operator[](z) << " ";
    }
    cout << endl;
}