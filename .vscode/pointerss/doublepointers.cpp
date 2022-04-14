#include <iostream>
using namespace std;
int main(){
    int i=5;
    int *ptr1=&i;
    cout<<"printing p"<< " "<< ptr1 <<endl;
    cout<<"address of p"<< " "<<&ptr1<<endl;
    // to print address of ptr1
    int **ptr2=&ptr1;
    cout<<ptr1<<endl; 
    cout<<* ptr2<<endl;

   // to print value of i
   cout<<i<<endl;
   cout<<*ptr1<<endl;
   cout<<**ptr2<<endl; 

   // print address of ptr1
cout<<&i<<endl;
cout<<ptr1<<endl;
cout<<*ptr2<<endl;

cout<<&ptr1<<endl;
cout<<ptr2<<endl;


}