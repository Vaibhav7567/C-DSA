#include <iostream>
using namespace std;

class animal
{
private:
    string name;
    string type;

public:
    static int breednumber;
    // constructor
    animal()
    {
        cout << "Constructor called " << endl;
    }
    // parameterized constructor
    animal(string name, string type)
    {
        this->name = name;
        this->type = type;
    }
    // copy constructor
    animal(animal &temp)
    {
        this->name = temp.name;
        this->type = temp.type;
    }
    void print()
    {
        cout << "Copy consturctor has been invoked " << endl;
        cout << this->name << endl;
        cout << this->type << endl;
    }

    string getname()
    {
        return name;
    }
    string gettype()
    {
        return type;
    }
    string setname(string n)
    {
        name = n;
    }
    string settype(string t)
    {
        type = t;
    }
    ~animal()
    {
        cout << "Desctructor is called "<< endl;
    }

    static int random()
    {
        return breednumber;
    }
};
int animal :: breednumber = 1;
int main()

{
    /*
    animal b("Lion", "Carnivore");
    b.print();
    // copying a constructor
    animal a(b);
    a.print();

    animal *c = new animal;
    // destructor called manually 
    delete c;

*/

    /*
    animal a;

    a.setname("Cow");
    a.settype("Herbivore");

    a.print();

    animal b("Lion", "Carnivore");
    b.print();
    */


   cout << animal::breednumber << endl;
   
   cout << animal::random() << endl;
}
