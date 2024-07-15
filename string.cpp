#include <iostream>

using namespace std;

int main()
{

    // string myName = "Kenny";
    // string myName2 = {'K', 'e', 'n', 'n', 'y'};
    // char myName3[] = "Kenny";

    // cout << myName << endl;
    // cout << myName[0] << endl;
    // cout << myName[3] << endl;

    // cout << myName.at(0) << endl;
    // cout << myName.at(3) << endl;
    // cout << myName2 << endl;
    // cout << myName3 << endl;


    string myName = "Kenny";
    cout << myName << endl;
    cout << myName.length() << endl;
    cout << (myName.length() == 0) << endl;
    cout << (myName == "") << endl;
    cout << myName.empty() << endl;
    cout << myName[myName.length()-1] << endl;
    cout << myName.back() << endl; //last element
    cout << myName.back() << endl; //first element
    

}