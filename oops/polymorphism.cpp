#include<iostream>
using namespace std;
class A{
    public:
    virtual void display()
    {
        cout << "I am base class" << "\n";
    }
};

class B : public A{
    public:
    void display() override{
        cout << "I am derived class" << "\n";
    }
};
int main()
{
    A *ptr;
    B obj;
    ptr = &obj;
    ptr -> display();

}