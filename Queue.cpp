//Queue Data Structure

#include <bits/stdc++.h>
using namespace std;

class Queue
{

    int *arr;
    int current_size;
    int front;
    int rear;
    int max_size;

public:
    Queue(int default_size = 5)
    {
        max_size = default_size;
        arr = new int[max_size];
        current_size = 0;
        front = 0;
        rear = max_size - 1;
    }
    bool isFull()
    {
        return max_size == current_size;
    }
    bool isEmpty()
    {
        return current_size == 0;
    }

    void push(int data)
    {
        if (!isFull())
        {
            rear = (rear + 1) % max_size;
            arr[rear] = data;
            current_size++;
        }
    }

    void pop()
    {
        if (!isEmpty())
        {
            front = (front + 1) % max_size;
            current_size--;
        }
    }

    int getFront()
    {
        return arr[front];
    }
};

int main()
{

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    q.pop();
    q.push(9);

    while (!q.isEmpty())
    {
        cout << q.getFront() << endl;
        q.pop();
    }
}