#include <iostream>
using namespace std;
int main(){
    int a=10;
    int*p;
    p=&a;
    cout<<*p<<endl;
    int **q=&p;
    cout<<*q<<endl; // p di value
    cout<<**q<<endl; // a di value
}