#include <iostream>
#include <math.h>
using namespace std;
/*int power(int n, int m)
{

    int ans = 1;
    for (int i = 1; i <= m; i++)
    {
        ans = ans * n;
    }
    return ans;
}*/
/*
int fact(int n)
{

    int answer = 1;

    for (int i = 1; i <= n; i++)
    {
        answer = answer * i;
    }
    return answer;
}
int nCr(int n, int r)
{
    int ans = ((fact(n)) / (fact(r) * fact(n - r)));
    return ans;
}
*/
bool isprime(int n)
{
    for(int i = 2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        return 1;
    }
}

int main()
{
    /*int a, b;
    cout << "Enter the values of a and b " << endl;

    cin >> a >> b;
    cout << "The answer is " << power(a, b) << endl;
    cout << "Enter the values of c and d " << endl;
    int c, d;
    cin >> c >> d;

    cout << "The answer is " << power(c, d);*/
    /*int a, b;
    cin >> a >> b;
    int answer = nCr(a, b);
    cout << answer;
*/
    int n;
    cin>>n;
    if(isprime(n))
    {
        cout<<" it is a prime number "<<endl;
    }
    else{
        cout<<"It is a not prime";
    }
}
