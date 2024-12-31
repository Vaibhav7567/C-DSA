#include <iostream>
using namespace std;
int main()
{
    /*
    int num = 5;

    // Address of num
    cout << "Address of num : " << &num << endl;

    int *ptr = &num;

    cout << "Value of num " << *ptr << endl;
    cout << "Address of num is " << ptr << endl;
    cout << "Address of pointer is " << &ptr << endl;

    double a = 1;
    double *p = &a;
    cout << "Size of num is " << sizeof(num) << endl;
    ;
    cout << "Size of a is " << sizeof(a) << endl;
    ;
    cout << "Size of ptr is " << sizeof(ptr) << endl;
    ;
    cout << "Size of p is " << sizeof(p) << endl;
    */
    /*
     int i = 5;
     // int *q = &i; OR
     int *q = 0;
     q = &i;
     cout << q << endl;
     cout << *q << endl;
     */
    int num = 5;
    int a = num;
    a++;

    int *p = &num;
    cout << "Before " << *p << endl;
    (*p)++;
    cout << "After " << *p << endl;

    // copying a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;


    // Pointer Arthimetic
    int i = 3;
    int *t = &i;
    cout << "Before :" << t << endl;
    t = t + 1;
    cout << "After :" << t << endl;
    return 0;
}