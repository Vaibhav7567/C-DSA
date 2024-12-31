#include <iostream>
using namespace std;
class human
{
public:
    int age;
    int height;
    int weight;
};
class male : public human
{
    public:
    string color;
};
int main()
{
    male object1;
    object1.age = 21;
    object1.height = 6;
    object1.weight = 80;
    object1.color = "black";
    
    cout << object1.age << endl;
    cout << object1.height << endl;
    cout << object1.weight << endl;
    cout << object1.color << endl;

}