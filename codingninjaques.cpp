#include <iostream>
using namespace std;

//
void changesign(int *p)
{
    *p = (*p) * -1;
}
void square(int *p)
{
    int a = 10;
    p = &a;
    *p = (*p) * (*p);

}
int main()
{
    // Q1

    /*
    float f = 10.5;
    float p = 2.5;

    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p;
    */
    // Question 2
    /*
    int a = 7;
    int b = 17;
    int *c = &b;
    *c=7;
    cout << a << " " << b;
    */
    // Q 3
    /*
    int *p = 0;
    int a = 10;
    *p = a;
    cout << *p << endl;
    */

    // Q
    /*
     char ch = 'a';
     char *ptr = &ch;
     ch++;
     cout << *ptr <<endl;
     */
    // Q
    /*
    int a = 7;
    int *c =&a;
    c = c + 1;
    cout<< a << " " << *c << endl;
    */
    // Q
    /*
    int arr[5];
    int *c;
    cout << sizeof(arr) << " " << sizeof(c);
    */
    // Q
    /*
    int arr[] ={1,2,3,4,5};
    cout << *(arr)<< " "<< *(arr+1);
    */
    // Q
    /*
    int a[] = {1,2,3,4,5};
    int *p = a++;
    cout << *p << endl;
*/
    // Q
    /*
    int arr[4]= {4,5,6,7};
    int *p = (arr+1);
    cout << *arr + 9 << endl;
    */

    // Q
    /*
    char b[] = "xyz";
    char *c = &b[0];
    cout << c << endl;
    */
    // Q
    /*
     char s[] = "hello";
     char *p = s;
     cout << s[0] << " " << p[0];
     */

    // Q
    /*
    int a = 10;
    changesign(&a);
    cout << a << endl;
    */
    int a = 10;
    square(&a);
    cout << a << endl;
    
}