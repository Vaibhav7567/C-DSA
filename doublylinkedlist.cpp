#include <iostream>
using namespace std;
class node
{
public:
    node *previous;
    node *next;
    int data;
    node(int data)
    {
        this->data = data;
        this->previous = NULL;
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
        cout << "Memory free " << value << endl;
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
        head->previous = temp;
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
        temp->previous = tail;
        temp = tail;
    }
}
void insertinbetween(node *&head, node *&tail, int position, int data)
{

    // insert at the head
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

    // insert at the tail
    if (temp->next == NULL)
    {
        insertattail(head, tail, data);
        return;
    }

    node *between = new node(data);

    between->next = temp->next;
    temp->next->previous = between;
    temp->next = between;
    between->previous = temp;
}

void deletenode(node *&head, int position)
{
    if (position == 1)
    {
        node *temp = head;
        temp -> next -> previous = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        node *curr = head;
        node *prev = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr -> previous = NULL;
        prev -> next = curr -> next;
        curr->next = NULL;
        delete curr;
    }
}
void print(node *&head)
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
    print(head);

    insertathead(head, tail, 20);
    print(head);

    insertathead(head, tail, 30);
    print(head);

    insertathead(head, tail, 40);
    print(head);

    insertattail(head, tail, 50);
    print(head);

    insertinbetween(head, tail, 3, 60);
    print(head);

    deletenode(head, 3);
    print(head);
}