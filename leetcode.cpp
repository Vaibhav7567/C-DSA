#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // Question 1
    /*
    int n;
    int ans = 0;
    cout << "enter the digit\n";
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        if(ans>(INT16_MAX/10)||ans<(INT16_MIN/10))
        {
            cout<<"Out of the range" ;
            return 0;
        }
        ans = ans * 10 + digit;
        n=n/10;
    }
    cout << ans;
    */
    // Question 2
    /*
     int n;
     cout<<"Enter the number\n";
     cin >> n;
     int m = n;
     int mask = 0;

     if(n==0)
     {
         return 1;
     }
     while (m != 0)
     {
         mask = (mask << 1) | 1;
         m = m >> 1;

     }
     int ans = (~n) & mask;
     cout<<ans;
     */
    // Question 3
    int n;

    cout << "Enter the number \n";
    cin >> n;

    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (n == ans)
        {
            cout << "The number is in 2's power "<<ans;
        }
    }

    return false;
}