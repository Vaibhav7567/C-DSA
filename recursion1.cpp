#include <iostream>
using namespace std;
void reachhome(int source, int destination)
{
    cout << "source " << source << " destination " << endl;
    if (source == destination)
    {
        cout << "Reached home " << endl;
        return;
    }
    return reachhome(source + 1, destination);
}
int fibonacci(int m)
{
    if (m == 0)
    {
        return 0;
    }
    if (m == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(m - 1) + fibonacci(m - 2);
    }
}
void saydigits(int m, string arr[])
{
    if (m == 0)
    {
        return;
    }
    int digit = m % 10;
    m = m / 10;
    saydigits(m, arr);
    cout << arr[digit] << " ";
}

int main()
{
    /*
    int source = 0;
    int destination = 10;
    reachhome(source , destination);


    */

    /*
     int m;
     cin >> m;
     cout << fibonacci(m) << endl;
     */
    int m;
    cin >> m;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    saydigits(m, arr);
}