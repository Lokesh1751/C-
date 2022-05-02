#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;
int main(){
    int n=4;
    int arr[n]={90,8,90,5};
    int newarr[n];
    int maxx= INT_MIN;
     int maxx2= INT_MIN;
    for(int i=0;i<n;i++){
        maxx=max(maxx,arr[i]);
        
    };
     for(int i=0;i<n;i++){
        if(arr[i]==maxx){
            arr[i]=-1;
        }
        
    };
     for(int i=0;i<n;i++){
        maxx2=max(maxx2,arr[i]);
        
    };
    cout<<maxx2<<endl;
   
}