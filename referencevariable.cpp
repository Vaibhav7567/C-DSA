#include <iostream>
using namespace std;
void update2(int &n)
{
    n++;
}
void update(int n)
{
    n++; // pass by value
}
int main()
{
    /*
    int  i = 7;
    int &j = i;
    i++;
    cout << i << endl;
    cout << j << endl;
    */

    int v = 7;
    cout << "Before " << v << endl;
    update(v);
    cout << "After " << v << endl;
    cout << "Before " << v << endl;
    update2(v);
    cout << "After " << v << endl;
    int n;
    cin >> n;
    
}