#include <iostream>
using namespace std;
int foo(const int *y)
    {
        return *y;
    }
int main()
{
    /*
    int x = 17;
    char y = 'm';
    const int *i = &x;
    const char*j = &y;

    cout << x << " " << y << endl;

    x = 10;
    y = 'v';

    cout << *i << " " << *j << endl;
    */
    // C++ program to demonstrate
    // the above concept

    // Driver code

    int z = 8;
    const int *x = &z;
    cout << foo(x);
    return 0;
}
