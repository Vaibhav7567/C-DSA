#include <iostream>
using namespace std;
bool isprime(int key)
{
    // int flag = 1;
    if (key == 0 || key == 1)
    {
        return 0;
    }
    for (int i = 2; i < key; i++)
    {
        if (key % i == 0)
        {
            return false;
        }
    }
    return true;
}
int countingprime(int key)
{
    int count = 0;
    for (int i = 2; i < key; i++)
    {
        if (isprime(i))
        {
            count++;
        }
    }
    return count;
}
int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int main()
{
    /*
    int key;
    cin >> key;

    if (isprime(key))
    {
        cout << "It is a prime number";
    }
    else
    {
        cout << "It is not a prime number";
    }
    */
    /*
     int key;
     cin >> key;

     cout << countingprime(key);
 */
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}
