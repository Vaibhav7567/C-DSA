#include <iostream>
using namespace std;
void update(int **ptr2)
{
    // Nothing will happen
    // ptr2 = ptr2 + 1;

    // *ptr2 = *ptr2 + 1;
    // address of i will change or the value of ptr will change

    **ptr2 = **ptr2 + 1;
    // value of i will change
}
int main()
{
    /*
    int a = 7;
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout << "The address of a is " << ptr << endl;
    cout << "The address of ptr is " << &ptr << endl;
    cout << "The address of ptr is " << ptr2 << endl;
    cout<<"The value of a is "<< a << endl;
    cout<<"The value of a is "<< *ptr << endl;
    cout<<"The value of a is "<< **ptr2 << endl;
    */
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    cout << "Before " << i << endl;
    cout << "Before " << ptr << endl;
    cout << "Before " << ptr2 << endl;
    update(ptr2);
    cout << "After " << i << endl;
    cout << "After " << ptr << endl;
    cout << "After " << ptr2 << endl;
}