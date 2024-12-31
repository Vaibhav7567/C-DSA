#include <iostream>
#include <string>

using namespace std;
string remove(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
string replace(string s)
{
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    return temp;
}
string duplicate(string s)
{
    string ans = "";
    int i = 0;
    while (i < s.length())
    {
        if (ans.length() > 0 && ans[ans.length() - 1] == s[i])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}
int main()
{
    /*
    char ch[50];
    cin.getline(ch, 50);
    cout << replace(ch) << endl;
    */
    /*
     string s = "dabdababcabcdab";
     string temp = remove(s, "abc");
     cout<<temp;
     */

    string s = "abbaca";
    string ss = duplicate(s);
    cout << ss;
    return 0;
}