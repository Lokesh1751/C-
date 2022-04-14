#include <iostream>
using namespace std;
bool binarysearch(int arr[],int start,int end,int key){
if(start>end){
    return false;
}

int mid= start+(end-start)/2;
if(arr[mid] == key){
    return true;
}
if(arr[mid]<key){
    return binarysearch( arr, mid+1,end,key);
}
else if(arr[mid]>key){
     return binarysearch( arr, start,mid-1,key);
}
}
int main(){
     int arr[6]={2,4,6,10,14,16};
    int size=6;
    int key=18;
    int start=0;
    int end=size-1;
    bool ans= binarysearch(arr,start,end,key);
    cout<<ans<<endl;
    return 0;
}