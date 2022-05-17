#include <iostream>
#include <queue>
using namespace std;
int main(){
// max heap
priority_queue<int> pq;
pq.push(4);
pq.push(2);
pq.push(5);
pq.push(3);
cout<<"element at top<<endl:"<<" "<<pq.top()<<endl;
pq.pop();
cout<<"element at top<<endl:"<<" "<<pq.top()<<endl;
cout<<"size:"<<" "<<pq.size()<<endl;
cout<<"isempty:"<<" "<<pq.empty()<<endl;
// min heap
priority_queue<int,vector<int>,greater<int>> minheap;
minheap.push(4);
minheap.push(2);
minheap.push(5);
minheap.push(3);
cout<<"element at top<<endl:"<<" "<<minheap.top()<<endl;
minheap.pop();
cout<<"element at top<<endl:"<<" "<<minheap.top()<<endl;
minheap.pop();
cout<<"element at top<<endl:"<<" "<<minheap.top()<<endl;
minheap.pop();
cout<<"element at top<<endl:"<<" "<<minheap.top()<<endl;
minheap.pop();
cout<<"element at top<<endl:"<<" "<<minheap.top()<<endl;
minheap.pop();

}