 #include <iostream> 
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int x=81;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
            cout<<i<<" "<<j;
            }
        }
        cout<<endl;
    }
      cout<<"Sorry Pajji Element Nhi Milya";
}