#include <iostream>
using namespace std;
int main(){
    // heap memory is called dynamic memory allocation
    new char ;
    // name nahi de skte bs bs address return krega yeh
    char *ch= new char;
    int n;
    cin>>n;

    // variable size array
    int *parr=new int [n];

    // taking input
    for(int i=0;i<n;i++){
       cin>>parr[i];
    }
    // output
     for(int i=0;i<n;i++){
       cout<<parr[i]<<" ";
    }
    while (true)
    {
        int i=5; // isme ek bar khtm hone k bad delete ho jata h apne aap
    }
     while (true)
    {
        int *p= new int; // isme ek bar khtm hone k bad delete nhi ho jata h apne aap krna pdta h
        delete p; // for delete it from heap
    }
    // delete [] arr;  by this we delete array
    

}