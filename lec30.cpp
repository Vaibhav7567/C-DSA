#include <iostream>
using namespace std;
#define pi 3.14
#define ig followers
#define followers 138
#define element 1, \
                2, \
                3
#define min(a, b) (((a) < (b)) ? (a) : (b))
inline int getmax(int a, int b)
{
    return ((a) > (b)) ? (a) : (b);
}

void print(int arr[], int size, int start = 0)
{
    for (int i = start; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    // cout << pi * 3 * 3 << endl;
    // cout<<" -- " << ig << endl;
    // cout<<" -- " << followers << endl;
    /*  int arr[] = {element};
      for (int i = 0; i < 3; i++)
      {
          cout << arr[i] << endl;
      }
      */
    /*
   int a, b;
   cin >> a >> b;
   cout << " The minimum number between two numbers is " << min(a, b) << endl;
   */

    /*
    int a = 1, b = 3;
    int ans = getmax(a, b);
    cout << ans << endl;

    a = a + 3;
    ans = getmax(a, b);
    cout << ans << endl;
    */
    int arr[5] = {1, 2, 3, 4, 5};
    print(arr, 5);
    cout << endl;
    print(arr, 5, 2);
    return 0;
}