#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int imag;

public:
    complex(int i = 0, int r = 0)
    {
        real = r;
        imag = i;
    }
    complex operator+(complex &obj)
    {
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print()
    {
        cout << real << " + i" << imag << endl;
    }
};
int main()
{
    complex c1(10, 10);
    complex c2(11, 11);
    complex c3 = c1 + c2;
    c3.print();
}