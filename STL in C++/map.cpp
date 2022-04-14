#include <iostream>
#include <map>
using namespace std; // complexity o(logn) 
int main()
{
    map<int,string> m; // sorted order aayega
    m[1]="babbar";
    m[2]="love";
    m[13]="angi";
    m.insert({5,"sujal"});
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" ";
         cout<<i.second<<endl;
    }
  cout<<"finding 13:"<<" "<<m.count(13)<<endl;
  m.erase(13);
  cout<<"after erase"<<endl;
   for(auto i:m){
        cout<<i.first<<" ";
         cout<<i.second<<endl;
    }

}