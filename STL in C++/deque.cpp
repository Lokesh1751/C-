#include <iostream>
#include <deque>
using namespace std;
int main(){
 deque<int> d;
 d.push_back(1);
 d.push_front(2);
  d.push_back(3);
 for(int i:d){
     cout<<i<<" ";
 } cout<<endl;
 d.pop_back(); // remove element from back
//  d.pop_front(); // remove element from front
 for(int i:d){
     cout<<i<<" ";
 } cout<<endl;
 cout<<d.at(0)<<endl;
 cout<<d.empty()<<endl;
// erase element
 d.erase(d.begin(),d.begin()+1);
  for(int i:d){
     cout<<i<<" ";
 } cout<<endl;

}