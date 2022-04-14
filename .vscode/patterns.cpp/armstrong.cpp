#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int armstrong=0;
    int orignaln=n;
    while(n>0){
         int num=n%10;
         armstrong+=pow(num,3);
         n=n/10;
    }
    if(armstrong==orignaln){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not a Armstrong Number"<<endl;
    }
    

}