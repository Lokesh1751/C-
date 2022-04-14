#include <iostream>
using namespace std;
int main()
{
    // int a[20]={1,2,3,4,5};
    // cout<<&a[0]<<endl;
    // int *p=&a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl; // alag address from &a
     
    int arr[10];
    // arr=arr+1 // show error
    int *ptr=&arr[0];
     cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;

}