#include <iostream>
using namespace std;
class animal
{
    public:
    string name;
    
};
class dog : public animal
{};
class puppy : public animal
{};
int main()
{
    puppy pug;
    string type = pug.name ;
    type = "Bully";
    cout << type << endl;
}