#include <iostream>
using namespace std;
int main()
{
    // Pattern 1
    /*
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
    */
    // Pattern 2
    /*
   int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // cout << (n-j)+1;
            cout << j;
            j++;
        }
        i++;
        cout << endl;
    }
    */

    // Pattern 3
    /* int n;
     cin >> n;
     int i = 1;
     int count = 1;

     while (i <= n)
     {
         int j = 1;

         while (j <= n)
         {
             // cout << (n-j)+1;
             cout << count << " ";
             count = count + 1;
             j++;
         }

         i++;
         cout << endl;
     }
     */
    // Pattern 4
    /*
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = (n-i)+1;
        // int j = 1;
        while (j <= n)
        {

            cout << "*";
            // cout << i;
            j++;
        }
        i++;
        cout << endl;
    }
    */
    // Pattern 6
    /*
    int n;
    cin >> n;
    int i = 1;
    int count = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count = count + 1;

            j++;
        }
        i++;
        cout << endl;
    }*/
    // Pattern 7
    /* int n;
     cin >> n;
     int i = 1;

     while (i <= n)
     {
         int j =1;
         int count = i;
         while (j <= i)
         {
             cout << count << " ";
             count = count - 1;


             j++;
         }
         i++;
         cout << endl;
     }
     */
    //  Pattern 9
    /*
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            char ch='A' + i - 1;
            cout << ch << "  ";
            j++;
        }
        i++;
        cout << endl;
    }
    */
    // Pattern 10
    /*
    int n;
    cin >> n;
    int i = 1;
    char start = 'A';

    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {

            cout << start << "  ";
            start = start + 1;
            j++;
        }
        i++;
        cout << endl;
    }*/
    // Pattern 11
    /*
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << "  ";

            j++;
        }
        i++;
        cout << endl;
    }
    */
    // Pattern 12

    /*
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;


        while (j <= i)
        {
            char ch = 'A'+i-1;
            cout << ch << "  ";

            j++;
        }

        i++;
        cout << endl;
    }
    */
    // Pattern 13
    /*
    int n;
    cin >> n;
    int i = 1;
    char ch = 'A';

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch = ch + 1;

            j++;
        }
        i++;
        cout << endl;
    }
    */
    // Pattern 14
    /* int n;
     cin >> n;
     int i = 1;

     while (i <= n)
     {
         int j = 1;
         char ch = 'A' + n - i;
         while (j <= i)
         {

             cout << ch << " ";
             ch = ch + 1;

             j++;
         }
         i++;
         cout << endl;
     }
     */
    // Pattern 15
    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {

        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
    */
    // Pattern 16
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = n;
        while (j >= i)
        {
            cout << "*";
            j--;
        }
        i++;
        cout << endl;
    }
}