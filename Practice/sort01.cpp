#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[7]={2,2,2,1,1,1,0};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}