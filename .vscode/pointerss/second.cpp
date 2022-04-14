#include <iostream>
using namespace std;
int main(){

    // int i=5;
    // int *p1=0;
    // p1=&i; // now update value with &i
    // cout<<*p1<<endl;
  



    // int num=9;
    // int *p=&num;
    // cout<<"before"<<" "<<num<<endl;
    // (*p)++;
    //  cout<<"after"<<" "<< num<<endl;
 
 //copying a pointer
  int num=9;
    int *p=&num;
   int *q=p;
   (*q)++; // brackets are compulsory
   cout<<p<<" "<<q<<endl;
   cout<<*p<<" "<<*q<<endl;

// imp concept
int n=10;
int *pointerrr=&n;
cout<<pointerrr<<endl;
pointerrr=pointerrr+1;
cout<<pointerrr<<endl; // 4 bytes aage bdh gaya hai
 
 


}