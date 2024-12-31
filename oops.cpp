#include <iostream>
using namespace std;
class hero
{

private:
    string name;
    string surname;

public:
    // constructor
    hero()
    {
        cout << "constructor called" << endl;
    }
    // parameterized constructor
    hero(string name)
    {
        cout << "this -> " << this << endl;
        this->name = name;
    }

    int health;
    int level;
    string getname()
    {
        return name;
    }
    void setname(string n)
    {
        name = n;
    }
    string getsurname()
    {
        return surname;
    }
    string setsurname(string m)
    {
        surname = m;
    }
    
};

int main()
{

    /*
        // statically
        hero obj;
        obj.health = 100;
        // obj.name = "vaibhav";
        obj.level = 5;
        obj.setname("vaibhav");

        cout << "size of h1 " << sizeof(obj) << endl;
        cout << "health is " << obj.health << endl;
        // cout << "Name is " << obj.name << endl;
        cout << "Name is " << obj.getname() << endl;

        cout << "level is " << obj.level << endl;

        // dynamically
        hero *b = new hero;
        b->setsurname("Maheshwari");
        cout << "Surname is " << (*b).getsurname() << endl;
        cout << "Surname is " << b -> getsurname() << endl;
    */

    hero a;
    hero b("a");
    cout << "address of b is " << &b << endl;

}