#include <iostream>
using namespace std;
class node
{
public:
    node *next;
    int data;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Queue
{
public:
    node *front;
    node *rear;
    int count;
    int size;
    Queue(int size)
    {
        count = 0;
        this->size = size;
        this->front = NULL;
        this->rear = NULL;
    }
    void enqueue(int element)
    {
        if (count >= size)
        {
            cout << "Queue is full " << endl;
            return;
        }
        node *temp = new node(element);
        if (rear == NULL)
        {
            front = rear = temp;
        }
        else
        {

            rear->next = temp;
            rear = temp;
        }
        count++;
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        node *temp = front;
        if (front == rear)
        {
            front = rear = NULL;
        }
        else
        {
            front = front->next;
        }
        delete temp;
        count--;
    }
    int top()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            return front->data;
        }
    }
};
int main()
{
    Queue q(5);

    q.enqueue(10);

    cout << q.top() << endl;
}