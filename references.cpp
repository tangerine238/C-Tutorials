#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int savings = 10000;
    int savings2 = 50000;
    int *savingsPtr = &savings;
    //savingsPtr = &savings2;
    *savingsPtr += 2000;

    int &savingsRef = savings; // rSavings, refSavings, savings_ref, savingsRef
    savingsRef = savings2;
    savingsRef += 2000;

    cout << savings << endl;
    cout << *savingsPtr << endl;
    cout << savingsRef << endl;
}