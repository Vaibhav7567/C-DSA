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
// reverse using recursion
void rreverse(node *&head, node *curr, node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    node *forward = curr->next;
    rreverse(head, forward, curr);
    curr->next = prev;
}
node *reverse1(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *smallhead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;
    return smallhead;
}
node *reverse(node *&head)
{
    // Approach 3
    return reverse1(head);
    // Approach 2
    /*
    node *prev = NULL;
    node *curr = head;
    rreverse(head , curr, prev);
    return head;

    */
    // Approach 1
    /*
    if(head == NULL || head -> next == NULL)
    {
        return head;
    }
    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
    */
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
    print(head);

    head = reverse(head);
    cout << head->data << endl;
    print(head);
}