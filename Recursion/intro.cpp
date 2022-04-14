#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n){
    // base case
    if(n==0){
        return 1; // mandatory
    }
    int small = factorial(n-1); 
    int big= n*small;
    return big;
}
int power(int m){
    if(m==0){
        return 1;
    }
    int power2=power(m-1);
    return 2*power2;
}
void printcounting(int k){
    if(k==0){
        return ;
    }
    cout<<k<<" ";
    printcounting(k-1);
}

int main(){
    //  Recursion
    // int n;
    // cin>>n;
    // int ans= factorial(n);
    // cout<<ans<<endl;
    // int m;
    // cin>>m;
    //  int ans2=power(m);
    //  cout<<ans2<<endl;

    int k;
    cin>>k;
  printcounting(k);
}