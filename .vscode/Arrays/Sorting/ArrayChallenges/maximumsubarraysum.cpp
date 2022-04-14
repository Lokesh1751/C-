#include <iostream>  
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,-4,3,2,1};
    int sum=0;
    int mxx=INT_MIN;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
             sum+=arr[j];
             mxx=max(mxx,sum);
        }
    }
    cout<<mxx;
}