#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // first in first out
    queue<string> q;
    q.push("love");
    q.push("babbar");
    q.push("sujal");
    cout << "front element before: "
         << " " << q.front() << endl;
    cout << "size before pop:"<<" "<<q.size()
         << " " << endl;
    q.pop();
    cout << "front element after:"
         << " " << q.front() << endl;
    cout << "size after pop:"<<" "<<q.size()
         << " " << endl;
}