#include <iostream>
#include <queue>

using namespace std;

class CircularQueue {
private:
    queue<int> q;
    int front, rear, size, capacity;

public:
    CircularQueue(int capacity) {
        this->capacity = capacity;
        front = 0;
        rear = -1;
        size = 0;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        q.push(value);
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        front = (front + 1) % capacity;
        q.pop();
        size--;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return q.front();
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return q.rear();
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    int getSize() {
        return size;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    q.enqueue(6);
    q.enqueue(7);

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    return 0;
}