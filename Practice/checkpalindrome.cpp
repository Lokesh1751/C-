#include <iostream>
#include <vector>
using namespace std;
int main(){
    bool flag=true;
    int n=3;
    if(n%2!=0){
        cout<<"Not Palindrome"<<endl;
    }
    char arr[n]={'m','o','m'};
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
             flag=false;
             break;
        }
        else{
            continue;
        }
    }
    if(flag==true ){
        cout<<"yes palindrome";
    }
    else{
        cout<<"not";
    }

   

}