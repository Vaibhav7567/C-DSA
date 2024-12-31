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
        if (this->next == NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free " << value << endl;
    }
};
void insertnode(node *&tail, int element, int data)
{
    // assuming the element is in the list
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
void deletenode(node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        node *prev = tail;
        node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = prev -> next;
        }
        prev->next = curr->next;
        // one node LL
        if (curr == prev)
        {
            tail = NULL;
        }
        else if (curr == tail)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
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
            cout << "Value " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}
node *getstartingnode(node *tail)
{
    if (tail == NULL)
    {
        return NULL;
    }
    node *slow = tail;
    node *intersection = floyddetect(tail);
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void remove(node *&tail)
{
    if(tail == NULL)
        return ;
    node *startingofloop = getstartingnode(tail);
    node *temp = startingofloop;
    while(temp != startingofloop)
    {
        temp = temp->next;
    }
    temp -> next = NULL;
}

void print(node *&tail)
{
    node *temp = tail;

    if (tail == NULL)
    {
        cout << " List is empty " << endl;
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
    // print(tail);

    insertnode(tail, 20, 30);
    // print(tail);
    insertnode(tail, 30, 40);   
    insertnode(tail, 40, 50);
    insertnode(tail, 50, 60);
    // cout << tail ->data << endl;
    print(tail);
    

    /*
    insertnode(tail, 20, 10);
    print(tail);

    insertnode(tail, 20, 5);
    print(tail);
    */

    /*
     deletenode(tail, 20);
     print(tail);
     */
    /*
    if(iscircular(tail))
    {
        cout << "The linked list is circular" << endl;
    }
    else
    {
        cout << "The linked list is not circular "<< endl;
    }
    */

    /*
    if(detect(tail))
    {
         cout << "Cycle is present "<< endl;
    }
    else
    {
     cout << "Cycle is not present "<< endl;
    }
    // */
    if (floyddetect(tail) != NULL)

    {

        cout << "Cycle is present " << endl;
    }
    else
    {
        cout << "Cycle is not present " << endl;
    }
    node *loop = getstartingnode(tail);
    cout << "Starting at " << loop->data << endl;

    remove(tail);
    print(tail);
    return 0;
}