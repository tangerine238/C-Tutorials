#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 15, c = 20;

    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "c:" << c << endl;

    int *aPtr = &a, *bPtr = &b, *cPtr = &c;

    cout << "aPtr:" << aPtr << " *aPtr:" << *aPtr << endl;
    cout << "bPtr:" << bPtr << " *bPtr:" << *bPtr << endl;
    cout << "cPtr:" << cPtr << " *cPtr:" << *cPtr << endl;

    int *dPtr, *ePtr;
    cout << "dPtr:" << dPtr << " *dPtr:" << *dPtr << endl;
    cout << "ePtr:" << ePtr << " *ePtr:" << *ePtr << endl;
}