#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // Create a priority queue of integers
    priority_queue<int> pq;

    // Insert elements into the priority queue
    for (int i = 10; i <= 50; i += 10)
    {
        pq.push(i);
    }

    // Print the top element of the priority queue
    cout << "Top element: " << pq.top() << endl;

    // Pop the top element from the priority queue
    pq.pop();

    // Print the top element of the priority queue again
    cout << "Top element after pop: " << pq.top() << endl;

    // Print the size of the priority queue
    cout << "Size of priority queue: " << pq.size() << endl;

    // Check if the priority queue is empty
    if (pq.empty())
    {
        cout << "Priority queue is empty" << endl;
    }
    else
    {
        cout << "Priority queue is not empty" << endl;
    }

    return 0;
}