#include<iostream>
using namespace std;
class Queue
{
    public:
    int *arr;
    int front;
    int size;
    int rear;

    Queue(int size)
    {
        this -> size = size;
        arr = new int[size];
        rear = 0;
        front = 0;
    }
    bool isempty()
    {
        if(rear == front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int element)
    {
        if(rear == size)
        {
            cout << "Queue is full "<<endl;
        }
        else
        {
            arr[rear] = element;
            rear++;
        }
    }
    void dequeue()
    {
        if(isempty())
        {
            cout << "Queue is empty "<<endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if(rear == front)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    int top()
    {
        if(isempty())
        {
            cout << "Queue is empty "<<endl;
        }
        else
        {
            return arr[front];
        }
    }
    
};
int main()
{
    Queue q(5);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout << q.top() << endl;

    q.dequeue();

    cout << q.top() << endl;

}