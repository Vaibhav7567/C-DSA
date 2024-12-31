#include <iostream>
using namespace std;
int main()
{
    /*
    int a=7;
    cout<<a<<endl;
    if(true)
    {
        int a=67;
        cout<<a<<endl;
    }
    cout<<a<<endl;
*/
    // Question 1
    /*
    int n;
    cin >> n;
    int prod=1;
    int sum=0;
    while (n != 0)
    {
        int rem = n % 10;
        prod = prod * rem;
        sum = sum + rem;
        n = n/10;
    }
    int answer= prod-sum;
    cout<<answer;
    */
    // Question 2
    int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count;
}