#include <iostream>  
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
     int n=5;
    int arr[n]={-1,4,-6,7,-4};
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
         currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
}
    cout<<maxsum<<endl;

}