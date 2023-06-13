#include <iostream>
#include <queue>
using namespace std;

void Print(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << "size of queue is: " << q.size() << endl;

    cout << "The elements in queue are: " << endl;
    Print(q);

    cout <<"The reverse order of elements is: " ;
        while (!q.empty())
    {
        q.pop();
    }

    return 0;
}