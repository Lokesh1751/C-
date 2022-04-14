#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=(n/3);i++){
        for(int k=1;k<=n;k++){
             if( ((i+k)%4==0) || (i==2 && k%4==0)){
                       cout<<"*"<<" ";
             }
             else{
                 cout<<" ";
             }

        }
        cout<<endl;

    }
}