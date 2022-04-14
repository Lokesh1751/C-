#include <iostream>
using namespace std;
int main(){
    int n=9;
    char arr[n+1]="sujalangi";
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}