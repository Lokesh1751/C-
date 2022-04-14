#include <iostream>
using namespace std;
void  print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}
void update(int *p){
    p=p+1; // ye vapis purane wale address ko hi print krega
    *p=*p+1;

}
int main()
{
    int value=5;
    int *p=&value;
    print(p);
    cout<<"before"<<p<<endl;;
    cout<<"before *p "<<*p<<endl;;
    update(p);
    cout<<"after"<<p<<endl; // same value rhegi bcz 
        cout<<"after *p "<<*p<<endl;; 
    return 0;
}