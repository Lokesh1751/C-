#include <iostream>
using namespace std;
int sumarray(int arr[],int n){
     if(n==0){
      return 0;
     }
     if(n==1){
         return arr[0];
     }
     int remainingpart=sumarray(arr+1,n-1);
     int sum=arr[0]+ remainingpart;
     return sum;

}
int main(){
    int arr[5]={3,4,1,5,6};
    int ans=sumarray(arr,5);
    cout<<ans<<endl;
}





















