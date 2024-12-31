#include <iostream>
using namespace std;
int main()
{
    // Fibonacci Number
    /*
    cout << "Enter the number\n";
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <= n; i++)
    {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
  */
    // Prime Number
    /*
    cout << "Enter the number\n";
    int n;
    cin >> n;
    bool isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            // cout<<"The number is not prime";
            isprime=0;
            break;
        }
        
    }
    if(isprime==0)
    {
        cout<<"Not a prime number";
    }
    else{
        cout<<"Is a prime number";
    }
*/
// Contiune
/*
    for(int i=1;i<10;i++)
    {
        
        if(i==5){
            continue;
        }
        cout<<"Vaibhav"<<i<<endl;
        
    }
    */
   for(int i=0;i<=5;i--)
   {
    cout<<i<<" ";
    i++;
   }
}