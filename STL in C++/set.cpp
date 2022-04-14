#include <iostream>
#include <set> // not get duplicate elements
using namespace std;
int main()
{
    set<int> s; // get elements in sorted order
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(0);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(0);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // complexity o(nlogn)

    s.erase(s.begin());
     for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // delete 2nd element
    set<int>::iterator it=s.begin();
    it++;
     for (auto i : s)
    {
        cout << i << " ";
    }
    cout<<endl;
    // count 
    cout<<"value available in set or not"<<" "<<s.count(5)<<endl;

    // find
    set<int>::iterator itr=s.find(5);
    cout<<"value at itr :"<<" "<<*itr<<endl;

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<endl;
    }

}