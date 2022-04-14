#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]={1,2,3}; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
        for(int j=0;j<=i;j++){
            cout<<arr[j]<<" ";
        } cout<<endl;
    }
}