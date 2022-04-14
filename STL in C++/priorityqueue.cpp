#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // max hea
    priority_queue<int> maxI;
    // min heap
    priority_queue<int, vector<int>, greater<int>> minI;
    maxI.push(1);
    maxI.push(3);
    maxI.push(2);
    maxI.push(0);
int sizee=maxI.size();
    for(int i=0;i<sizee;i++){
        cout<<maxI.top()<<" ";
        maxI.pop();

    }
    cout<<endl;

minI.push(1);
    minI.push(3);
    minI.push(2);
    minI.push(0);
int sizee1=minI.size();
    for(int i=0;i<sizee1;i++){
        cout<<minI.top()<<" ";
        minI.pop();

    } cout<<endl;
cout<<"empty or not"<<" "<<maxI.empty()<<endl;
cout<<"empty or not"<<" "<<minI.empty()<<endl;
}