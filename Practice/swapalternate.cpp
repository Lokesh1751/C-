#include <iostream>
using namespace std;
#include <math.h>
void swapAlternate(int *arr, int size)
{
    for(int i=0;i<size-1;i+=2){
       swap(arr[i],arr[i+1]);
    
    }
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";

    } cout<<endl;
}
int main(){
    int arr[11]={1, 2, 3, 4, 5, 6, 7 , 8, 9, 10, 11 };
    swapAlternate(arr,11);

}