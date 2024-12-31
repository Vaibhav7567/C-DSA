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
    friend class B;
};

class B{
    public:
    void display(A &t)
    {
        cout << t.a ;
    }
};
int main()
{
    A obj1(10);
    B obj;
    obj.display(obj1);
}