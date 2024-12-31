#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty " << endl;
            return -1;
        }
    }

    bool isempty()
    {
        if (top >= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    /*
    // Stack implementation using STl
    stack<int> s;
    s.push(1);
    s.push(2);

    s.pop();

    cout << "Top is element is " << s.top() << endl;
    if (s.empty())
    {
        cout << "Stack is empty " << endl;
    }
    else
    {
        cout<< "Stack is not empty"<< endl;
    }

    cout << "The size of the stack is "<<s.size() << endl;
    */
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(24);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    return 0;
}