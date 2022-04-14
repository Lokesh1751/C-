#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l;
    // copy a list
    list<int> n(l);
    // Make array of size 5 with each element 100
    list<int> k(5,100);
    for(int i:k){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    } cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;;
    for(int i:l){
        cout<<i<<" ";
    } cout<<endl;

    cout<<"size of list:"<<" "<<l.size()<<endl;
    

}