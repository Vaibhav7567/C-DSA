#include <iostream>
using namespace std;
class btech
{
public:
    int roll_no;
    string name;
};
class section : public btech
{
    public:
    section(char sec)
    {
        cout << "The section of the student is "<< sec << endl;
    }
    void print()
    {
        cout << "The roll nu of the student is " << roll_no << endl;
        cout << "The name of the student is " << name << endl;

    }
};
int main()
{
    section s1('B');
    s1.roll_no = 535;
    s1.name = "Vaibhav";
    s1.print();
}