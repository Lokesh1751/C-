#include <iostream>
using namespace std;
int getsum(int arr[],int n){ // where int arr[] is a pointer and it also written as *arr
    // cout<<"size :"<<" "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};
    cout<<getsum(arr+3 ,n)<<endl;
}