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
node *reversek(node *&head, int k)
{
    if(head == NULL)
    {
        return NULL;
    }

    node *next = NULL;
    node *curr = head;
    node *prev = NULL;
    int count = 0;
    while(curr!=NULL && count < k )
    {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;

    }
    
    if(next != NULL)
    {
        head -> next = reversek(next, k);
    }
    return prev;

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
    node *object = NULL;
    node *head = object;
    node *tail = object;

    insertathead(head, tail, 10);
    insertathead(head, tail, 20);
    insertathead(head, tail, 30);
    insertathead(head, tail, 40);
    insertathead(head, tail, 50);
    // insertathead(head, tail, 60);

    print(head);

    head = reversek(head, 3);
    print(head);
}