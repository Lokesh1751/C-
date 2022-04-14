#include <iostream>
using namespace std;
int main(){
    int a=10;
    int*aptr=&a;
    cout<<*aptr<<endl; //get value of a
     cout<<aptr<<endl; //get address of a in hexadecimal form 
    *aptr=20;
    aptr++; // adress incriment by space of 4 bytes bcz integer contain 4 bytes space
    cout<<a<<endl; //get updated value of a
    // * is dereference operator
    double d=4.3;
    double  *p2=&d;
    cout<<"Address is :"<<" " << p2<<endl;
       cout<<"Value is :"<<" " << *p2<<endl;
       cout<<"size of integer is"<<" "<<sizeof(*p2)<<endl;
       cout<<"size of pointer is"<<" "<<sizeof(p2);
       // i we want to locate to undefined pointer value thn defined it as 0
int *p1; //not do this bcz it point some unwanted value
int *p=0;// do this bcz it shows segmentation error bcz this type of file doesnot exist
cout<<*p<<endl;
} // size of pointer is 8