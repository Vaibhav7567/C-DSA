#include <iostream>
using namespace std;
class animal
{
public:
    void speak()
    {
        cout << "Barking " << endl;
    }
};
class human
{
    public:
    void say()
    {
        cout << "Speaking "<<endl; 
    }
};
class hybrid : public human, public animal{};
int main()
{
    hybrid object;
    object.speak();
    object.say();
}