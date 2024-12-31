#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Stack
{
public:
    node *top;
    int size;
    int count;
    Stack(int size)
    {
        this->top = NULL;
        this->size = size;
        count = 0;
    }

    void push(int val)
    {
        if (count >= size)
        {
            cout << "Stack overflowed " << endl;
            return;
        }
        node *temp = new node(val);
        temp->next = top;
        top = temp;
        count++;
    }
    void pop()
    {

        if (top == NULL)
        {
            cout << "Stack underflow " << endl;
            return;
        }
        node *temp = top;
        top = top->next;

        delete temp;
        count--;
    }
    int peek()
    {
        if (top == NULL)
        {
            cout << "List is empty " << endl;
        }
        else
        {
            return top->data;
        }
    }
    bool isempty()
    {
        return top == NULL;
    }
};

int main()
{

    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(30);
    st.push(30);
    st.push(30);

    cout << st.peek() << endl;

    // st.pop();
    // cout << st.peek() << endl;
}