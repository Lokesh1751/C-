#include <iostream>
#include <map>
using namespace std;

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=12;
    int count=0;
	for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=i+2;i<5;i++){
                  if(arr[i]+arr[j]+arr[k]==x){
                count++;
                
            }

            }
            
        }
    }
    cout<<count<<endl;
}