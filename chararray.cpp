#include <iostream>
using namespace std;
int length(char name[])
{
    int length = 0;
    while (name[length] != NULL)
    {
        length++;
    }
    return length;
}
void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}
char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {

        if (tolowercase(name[s]) != tolowercase(name[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

char getmaxocc(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a' + ans;
    return finalans;
}
int main()
{
    /*
    char name[20];

    cout << "Enter your name " << endl;
    cin >> name;
    cout << "Name: " << name << endl;
    // cout<<"The length of string is "<<length(name);
    int len = length(name);
    // reverse(name, len);
    // cout<<"Your reversed name is "<<name;
    if (palindrome(name, len))
    {
        cout << "the string is a palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
    */
    string s;
    cin >> s;
    cout << getmaxocc(s) << endl;
}