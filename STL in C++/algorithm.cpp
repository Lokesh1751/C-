#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
 vector<int> v;
 v.push_back(1);
 v.push_back(2);
 v.push_back(3);
 v.push_back(4);

 cout<<"check element 6 present or not"<<" "<<binary_search(v.begin(),v.end(),3)<<endl;
  cout<<"lower bound"<<" "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl; // check index

  int a=10;
  int b=19;
  cout<<"maximum from both"<<" "<<max(a,b)<<endl;
   cout<<"minimum from both"<<" "<<min(a,b)<<endl;;

   // swap
   swap(a,b);
   cout<<"now a is"<<" "<<a<<endl;
  cout<<"now b is"<<" "<<b<<endl;

  // reverse
  string name ="sujal";
  reverse(name.begin(),name.end());
  cout<<"reverse name is:"<<" "<<name;

// rotate

rotate(v.begin(),v.begin()+1,v.end());
cout<<"after rotate"<<endl;
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;

//sort

sort(v.begin(),v.end());
for(int i:v){
    cout<<i<<" ";
}
// sort funct ion based on  intro sort formed by quicksort,insertionsort,heapsort

}