#include <iostream>
#include <vector>
using namespace std;
int main(){
    // dynamic array
    vector<int> v; // 0 size array
     cout<<"Capacity:"<<" "<<v.capacity()<<endl; //0

     // add element in vector
     v.push_back(1);
      cout<<"Capacity:"<<" "<<v.capacity()<<endl; 
      v.push_back(2);
      cout<<"Capacity:"<<" "<<v.capacity()<<endl;
      // bhr gya hai so capacity double hoke 4 hojeyegi 
      v.push_back(3);
      cout<<"Capacity:"<<" "<<v.capacity()<<endl; 

      cout<<"Size:"<<" "<<v.size()<<endl;

      cout<<"element index at"<<" "<<v.at(2)<<endl;
       cout<<"first element"<<" "<<v.front()<<endl;
     cout<<"last element"<<" "<<v.back()<<endl;
     
     v.pop_back(); // remove element from last
     
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     } 
     cout<<endl;

      cout<<"Before Clear Size:"<<" "<<v.size()<<endl;

     // clear vector
     // now size zero not capacity

     v.clear();
      cout<<"After Clear Size:"<<" "<<v.size()<<endl;




}