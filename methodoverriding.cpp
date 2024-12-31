#include <bits/stdc++.h>
using namespace std;
class A
{
    public:
    void speak()
    {
        cout << "Vaibhav "<< endl;

    }
};
class B : public A
{
    public:
    // void speak()
    // {
    //     cout << "Maheshwari" << endl;
    // }
};
int main()
{
    B obj;
    obj.speak();
}