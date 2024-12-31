#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    else
    {
        return n * factorial(n - 1);
    }
}
int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 2 * power(n - 1);
    }
}
void print(int m)
{
    if (m == 0)
    {
        return ;
    }
    print(m - 1);
    cout << m << endl;
}
int main()
{
    /*
    int m;
    cin >> m;
    int ans = factorial(m);
    cout << ans;
    cout << ans;
    */
    /*
     int m;
     cin >> m;
     int answer = power(m);
     cout << answer;
     */
    int m;
    cin >> m;

    print(m);
}