#include <iostream>
using namespace std;
bool lsearch(int arr[], int size,int key){
    // base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else {
        bool remainingpart=lsearch(arr+1,size-1,key);
        return remainingpart;
    }
}
int main(){
    int arr[5]={3,5,1,2,6};
    int size=5;
    int key=5;
    bool ans= lsearch(arr,size,key);
    if(ans){
        cout<<"Present Here";
    }
    else{
        cout<<"Absent Here";
    }
}