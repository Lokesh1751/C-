#include <iostream>
using namespace std;
int ncr(int n,int r){
    int nrsub=n-r;
    int n1=1;
    int r1=1;
    int nr1=1;
    for(int i=1;i<=n;i++){
        n1*=i;
    }
    int n11=n1;
    for(int j=1;j<=r;j++){
        r1*=j;
    }
    int r11=r1;
    for(int k=1;k<=nrsub;k++){
        nr1*=k;
    }
    int nr11=nr1;
    return n11/(r11*nr11);

}
int main(){
   int n,r;
   cin>>n>>r;
   int ans=ncr(n,r);
   cout<<ans<<endl;
}