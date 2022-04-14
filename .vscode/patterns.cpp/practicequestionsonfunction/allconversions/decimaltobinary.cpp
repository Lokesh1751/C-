#include <iostream>
using namespace std;
int decimaltobinary(int n){
    int ans=1;
    while (n>0){
          int ans2=n%2;
          ans+=ans2;
          n=n/2;

    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimaltobinary(n)<<endl;
}