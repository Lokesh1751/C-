#include <iostream>
#include <map>
using namespace std;

int main(){
    int arr[9]={1,3,6,2,5,4,3,2,4};
    int x=7;
    int count=0;
	for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(arr[i]+arr[j]==x){
                count++;
                
            }
            
        }
    }
    cout<<count<<endl;
}