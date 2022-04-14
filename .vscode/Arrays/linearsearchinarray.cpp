#include <iostream>
using namespace std;
int main(){
    int n=6;
    int key;
    cin>>key;
    int arr[n]={12,18,20,42,8,10};
    for(int i=0;i<n;i++){
          if(arr[i]==key){
              cout<<i<<endl;
          }
    }
    cout<<-1;

    
}