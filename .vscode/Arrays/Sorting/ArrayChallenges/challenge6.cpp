#include <iostream>  //subarray whose sum is equal to s
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    int n=4;
    int sum=0;
    int arr[n]={1,2,3,8};
    for(int i=0;i<n;i++){
        int s=5;
         sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==s){
            cout<<i+1<<" "<<j+1<<endl;
        }
    
            

        }
    }
}