#include <iostream>
using namespace std;
int main()
{
    // Calculator
    /*
    int a, b;
    char ch;
    cin >> a >> ch >> b;
    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout<< a / b;
        break;
    case '%':
        cout<< a%b;
        break;


    default:
        cout << "wrong input";
    }
    */
    /*
    int num=1;
    while(1)
    {
        switch (num)
        {
        case 1:
            cout<<"one";
            break;

        default:
            break;

        }
        exit(num);
    }
    */
    // Question
    int n, rem;
    int rs100;
    int rs50;
    int rs20;
    int rs1;
    cout << " Enter the amount you wanna check " << endl;
    cin >> n;
    switch (1)
    {
    case 1:
        rs100 = n / 100;
        n = n % 100;
        cout << "The number of notes required of 100 is " << rs100 << endl;
    case 2:
        rs50 = n / 50;
        n = n % 50;
        cout << "The number of notes required of 50 is " << rs50 << endl;
    case 3:
        rs20 = n / 20;
        n = n % 20;
        cout << "The number of notes required of 20 is " << rs20 << endl;
    case 4:
        rs1 = n / 1;
        cout << "The number of notes required of 1 is " << rs1 << endl;
    }
    return 0;
}