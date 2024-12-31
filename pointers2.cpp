#include <iostream>
using namespace std;

void print(int *p)
{
    cout << p << endl;
}
void update(int *p)
{
    // p = p + 1;
    *p = *p + 1;
}
void size(int arr[], int n)
{
    cout << sizeof(arr) << endl;
}

int getsum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    /*
    int arr[5];
    cout << "The address of the first memory block is " << arr << endl;
    cout << "The address of the first memory block is " << &arr[0] << endl;

    for(int i = 0; i< 5; i++)
    {
        cout<<&arr[i]<<endl;
    }

    int i  = 3;
    int brr[5] = {1,2,3,4,5};
    cout << i[brr];
    */

    int temp[10];
    int *ptr = &temp[0];
    cout << sizeof(temp) << endl;
    cout << sizeof(ptr) << endl;

    /*
    int arr[5] = {0};
    int *ptr = &arr[0];
    cout << " -> " << &arr[0] << endl;
    cout << " -> " << &ptr << endl;
    */
    /*
     int arr[10] = {0};
     // Error
     //arr = arr + 1;
     int *p = &arr[0];
     cout << p << endl;
     p = p + 1;
     cout << p << endl;
     */
    /*
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";
    cout << arr << endl;

    cout<< ch << endl;

    char temp = 'm';
    char *ptr = &temp;
    cout << ptr << endl;
    */
    /*
     int temp = 5;
     int *p = &temp;

     print(p);

     // cout << "before " << p << endl;
     // update(p);
     // cout << "After "<< p << endl;


     cout << "before " << *p << endl;
     update(p);
     cout << "After "<< *p << endl;
     */
    /*
    int arr[5] = {1, 2, 3, 4, 5};
    size(arr, 5);

    cout << "Sum is "<< getsum(arr+2, 3);
*/
    return 0;
}