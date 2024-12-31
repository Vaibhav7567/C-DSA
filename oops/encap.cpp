#include<iostream>
using namespace std;
class A{
    private:
    int a, b;
    public:
    void display(int a,int b){
        this -> a = a;
        this -> b = b;
        cout << a << " ";
        cout <<  b;
    }
};
int main()
{
    A obj;
    obj.display(10, 20);
}