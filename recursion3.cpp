#include <iostream>
using namespace std;
void reverse(string &str, int i, int j)
{
    if (i > j)
    {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);
}
bool checkpalindrome(string name, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (name[i] != name[j])
    {
        return false;
    }
    else
    {
        return checkpalindrome(name, i + 1, j - 1);
    }
}
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    int ans = power(a, b / 2);
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int main()
{
    string name = "Minall";

    reverse(name, 0, name.length() - 1);
    cout << name << endl;
    bool isplaindrome = checkpalindrome(name, 0, name.length() - 1);
    if (isplaindrome)
    {
        cout << " It is a palindrome " << endl;
    }
    else
    {
        cout << "It is not a plaindrome " << endl;
    }

    int m, v;
    cin >> m >> v;
    int answer = power(m, v);
    cout << "The answer is " << answer << endl;
    return 0;
}