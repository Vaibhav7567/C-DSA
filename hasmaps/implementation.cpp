#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    // creation
    unordered_map<string, int> m;

    // insertion

    // 1st way

    pair<string, int> pair1 = make_pair("Vaibhav", 1);
    m.insert(pair1);
    // 2nd way

    pair<string, int> pair2("Maheshwari", 2);
    m.insert(pair2);

    // 3rd way
    m["Vaibhu"] = 3;
    m["best"] = 0;

    // Search
    cout << m["Vaibhav"] << endl;
    cout << m.at("Maheshwari") << endl;
    cout << m.at("best") << endl;
    // cout << m.at("Unknown key") << endl;
    cout << m["Unknown key"] << endl;

    cout << m.size() << endl;

    cout << m.count("Vaibhav") << endl;

    // m.erase("Vaibhav");
    // cout << m["Vaibhav"] << endl;

    /*
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    */
    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end())
    {
        cout << it -> first << " " << it -> second << endl;
        it++;
    }


    
}