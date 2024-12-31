#include <iostream>
#include <map>
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
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this -> next = NULL;
            cout << "Memory has been freed "<< value << endl;
        }
    }
};
void insertathead(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }
}
void insertattail(node *&head, node *&tail, int data)
{
    if (tail == NULL)
    {
        node *temp = new node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        node *temp = new node(data);
        tail->next = temp;
        tail = temp;
    }
}
void insertinbetween(node *&head, node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertathead(head, tail, data);
        return;
    }
    node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(head, tail, data);
        return;
    }
    node *between = new node(data);
    between->next = temp->next;
    temp->next = between;
}
void deletenode(node *&head, int position)
{
    if(position == 1)
    {
        node *temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else 
    {
        node *previous = NULL;
        node *current = head;
        int cnt = 1;
        while(cnt < position)
        {
            previous = current;
            current = current -> next;
            cnt++;
        }
        previous -> next = current -> next;
        current -> next = NULL;
        delete current;
    }
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // node *object = new node(10);
    node *head = NULL;
    node *tail = NULL;

    insertathead(head, tail, 20);
    insertathead(head, tail, 10);
    insertathead(head, tail, 5);
    insertattail(head, tail, 0);

    insertinbetween(head, tail, 2, 100);
    print(head);

    deletenode(head, 2);
    print(head);
}