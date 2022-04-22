#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;

    q.push(11);
    cout << "front of queue is:"
         << " " << q.front() << endl;

    q.push(15);

    q.push(13);

    cout << "Size of queue is:"
         << " " << q.size() << endl;
    q.pop();
    cout << "front of queue is:"
         << " " << q.front() << endl;
    cout << "Size of queue is:"
         << " " << q.size() << endl;
    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
}