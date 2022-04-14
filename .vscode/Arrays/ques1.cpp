#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    int maxnum=INT_MIN;
    int minnum=INT_MAX;
    for(int i=0;i<n;i++){
       maxnum=max(maxnum,arr[i]);
       minnum=min(minnum,arr[i]);
    }
    cout<<maxnum<<" ";
    cout<<minnum;
}