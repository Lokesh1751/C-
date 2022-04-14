#include <iostream> //sum of all subarrays
#include <math.h>
using namespace std;
int main(){
    int arr[5]={1,2,0,7,2};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=0;
        for(int j=i;j<5;j++){
             sum+=arr[j];
             cout<<sum<<endl;
        }
    }
}