#include <iostream> 
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    int n=7;
     int mxx=INT_MAX;
    int arr[n]={1,5,3,4,3,5,6};
    for(int i=0;i<n;i++){
         int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                mxx=min(mxx,i);

                
            }
           
        } 
         
    }
    cout<<mxx+1;
    

}