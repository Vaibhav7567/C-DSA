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
            this->next = NULL;
        }
        cout << "Memory has been freed " << value << endl;
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
        // tail = tail - > next;
        tail = temp;
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
    if (temp->next)
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
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *current = head;
        node *previous = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            previous = current;
            current = current->next;
            cnt++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

bool iscircular(node *tail)
{
    if (tail == NULL)
    {
        return true;
    }
    node *temp = tail->next;
    while (temp != NULL && temp != tail)
    {
        temp = temp->next;
    }
    if (temp == tail)
    {
        return true;
    }
    return false;
}
bool detect(node *tail)
{
    if (tail == NULL)
    {
        return false;
    }
    map<node *, bool> visited;
    node *temp = tail;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {

            cout << "cycle is present at " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
node *floyddetect(node *tail)
{
    if (tail == NULL)
    {
        return NULL;
    }
    node *slow = tail;
    node *fast = tail;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            cout << "Value " << slow -> data << endl;
            return slow;
        }
        
    }
    return NULL;
}
node *getstartingnode(node *tail)
{
    if(tail == NULL)
    {
        return NULL;
    }
    node *slow = tail;
    node *intersection = floyddetect(tail);
    while(slow != intersection)
    {
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

void remove(node *&head)
{
    if(head == NULL)
        return;
    node *startingofloop = getstartingnode(head);
    node *temp = startingofloop;
    while(temp != startingofloop)
    {
        temp =temp -> next ;
    }
    temp -> next = NULL;
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
    node *object = new node(10);

    node *head = object;
    node *tail = object;
    // print(head);

    insertattail(head, tail, 11);
    // print(head);

    insertattail(head, tail, 12);
    // print(head);

    insertinbetween(head, tail, 2, 13);
    // print(head);

    insertinbetween(head, tail, 1, 7);
    print(head);

/*
    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;
    */
    /*
        deletenode(head, 5);
        print(head);
        */

    tail->next = head->next;

    /*
    if (detect(tail))
    {
        cout << "Cycle is present " << endl;
    }
    else
    {
        cout << "Cycle is not present " << endl;
    }
    */
   if (floyddetect(head) != NULL)
    {
        cout << "Cycle is present " << endl;
    }
    else
    {
        cout << "Cycle is not present " << endl;
    }

    node *loop = getstartingnode(tail);
    cout << "Starting at "<< loop -> data << endl;

    remove(head);
    print(head);
}
