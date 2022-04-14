#include <iostream>  //get bit
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int findunique(int arr[],int n){
  int xorsum=0;
  for(int i=0;i<n;i++){
      xorsum=xorsum^arr[i];
  }
  return xorsum;

}
int findtwouniquenumber(int arr1[],int m){
    for(int i=0;i<m;i++){
        for(int j=i;j<m;j++){
            if(arr1[i]^arr1[j]==0){
                 continue;
            }
        }
    }
}
int main(){
    // int arr[]={1,2,3,4,1,2,3};
    // cout<<findunique(arr,7)<<endl;
    int arr1[]={1,2,3,4,1,2,3};
    cout<<findtwouniquenumber(arr1,7)<<endl;
    
}