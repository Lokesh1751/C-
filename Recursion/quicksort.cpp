#include <iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    // place pivot at right place
    int pivotindex= s+cnt;
    swap(arr[pivotindex],arr[s]);
    // left ans right part smbhal lete h
    int i=s,j=e;
    while (i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot){
            i++;
        }
        while (arr[i]>pivot)
        {
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotindex;
    

}
void quicksort(int arr[],int s,int e){
if(s>=e){
    return;
}
  // partition 
  int p= partition(arr,s,e);
  // left part
  quicksort(arr,s,p-1);
  // right part  
  quicksort(arr,p+1,e);
  }
int main(){
      int arr[10]={2,4,1,6,9,9,9,9,9,9};
      int n=10;
      quicksort(arr,0,n-1);
      for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      } cout<<endl;

}