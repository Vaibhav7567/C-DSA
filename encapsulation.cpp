#include <iostream>
using namespace std;
class btech
{
private:
    string name;
    int age;
    int height;

public:
    int getage()
    {
        return this->age;
    }
    int setage(int a)
    {
        age = a;
    }
    void print()
    {
        cout << age << endl;
    }
};
int main()
{
    btech first;
    first.setage(5);
    first.print();
}