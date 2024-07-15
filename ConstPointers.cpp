#include <iostream>
using namespace std;

int main(){
    int savings = 10000;
    const int savings2 = 50000;

    int* const savingsPtr = &savings;
    //*savingsPtr += 1800;

    const int* savingsPtr2 = &savings2;

    const int* const savingsPtr4 = &savings2; //const pointer to const int
    savingsPtr4 = &savings;
    *savingsPtr4 += 1800;

    cout << savings << endl;
    cout << savings2 << endl;

}