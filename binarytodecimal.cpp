#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // Decimal to Binary

    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;

    /*
    int n;
    cin >> n;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = digit + pow(2, i);
        }
        i++;
        n = n / 10;
    }
    cout << ans;
    */
}