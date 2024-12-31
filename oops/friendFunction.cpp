#include<iostream>
using namespace std;
class A{
    private:
    int a;

    public:
    A(int value)
    {
        a = value;
    }
   
    friend void display(A &t);
};
void display(A &t)
{
    cout << t.a << endl;
}
int main()
{
    A obj1(10);
    display(obj1);
}