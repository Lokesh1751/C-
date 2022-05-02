#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    int arr[7]={1,0,2,1,0,3,0};
    int count=0;
    vector <int> s;
    int newarr[7];
    for(int i=0;i<7;i++){
        if(arr[i]!=0){
            s.push_back(arr[i]);
             
        }
        else{
            count++;
        }
    }
   for(int i=0;i<count;i++){
       s.push_back(0);

   }
   for(int i:s){
       cout<<i<<" ";
   }
   

  


  }
    
