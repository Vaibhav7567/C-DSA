#include <iostream>
using namespace std;
// Question 1
/*
int ap(int n)

{
    int ans = 3*n + 7 ;
    return ans;

}
*/
// Question 2 fibonacci series
int fib(int n)
{
    int next;
    int first = 0;
    int second = 1;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n==2)
    {
        return 1;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            next = first+second;
           
            first = second;
            second = next;
        }
        cout<<next;
    }
}

int main()
{
    /*
    int a;
    cout << "Enter the nth term "<< endl;
    cin>>a;
    int answer = ap(a);
    cout<<"The nth term is "<<answer;
    */
    int a;
    cout << "Enter the nth term " << endl;
    cin >> a;
    fib(a);
    // cout << "The nth term is " << answer;s
}
