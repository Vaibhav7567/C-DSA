#include <bits/stdc++.h>
using namespace std;
class A
{
private:
    int a;

public:
    A(int a)
    {
        this->a = a;
    }
    friend void display(A &t);
};
void display(A &t)
{
    cout << t.a << endl;
}
int main()
{
    A obj(10);
    display(obj);
}
