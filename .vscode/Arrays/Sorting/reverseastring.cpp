 #include <iostream> 
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    int n=5;
    char rev[n];
    cin>>rev;
    for(int i=0;i<5;i++){
       int temp =rev[i];
       rev[i]==rev[n-i-1];
       rev[n-i-1]=temp;
    }
     for(int i=0;i<=6;i++){
         cout<<rev[i];
     }
    
}