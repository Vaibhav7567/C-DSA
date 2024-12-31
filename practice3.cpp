#include <iostream>
#include <map>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free " << value << endl;
    }
};
void insertnode(node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        node *temp = new node(data);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        node *temp = new node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void deletenode(node *tail, int value)
{
    if (tail == 0)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        node *prev = tail;
        node *curr = prev  -> next;
        int cnt = 0;
        while(curr -> data != value)
        {
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        if(curr == prev)
        {
            tail = NULL;
        }
        else if(curr == tail)
        {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}
void print(node *tail)
{
    node *temp = tail;
    if (tail == NULL)
    {
        cout << "List is empty " << endl;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
int main()
{
    node *tail = NULL;
    insertnode(tail, 10, 20);
    insertnode(tail, 20, 30);
    insertnode(tail, 30, 40);
    print(tail);

    deletenode(tail, 30);
    print(tail);
}