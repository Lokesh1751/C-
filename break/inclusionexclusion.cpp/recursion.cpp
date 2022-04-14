#include <iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum=sum(n-1);
    cout<<n+prevsum<<endl;
    return n+prevsum;
}
int power(int m,int p){
    if(p==0){
        return 1;
    }
    int prevpower=power(m,p-1);
    return m*prevpower;
}
int factorial(int k){
    if(k==0){
        return 1;
    }
    int prevfact=factorial(k-1);
    return k*prevfact;
}
int fibbo(int l){
    if(l==0){
        return 0;
    }
    else if(l==1){
        return 1;
    }
   int first=fibbo(l-1);
   int second=fibbo(l-2);
   return first+second;
}
int main(){
    //  int n;
    //  int m,p;
    //  cin>>m>>p;
    // //  cin>>n;
    // //  cout<<sum(n)<<endl;
    // cout<<power(m,p)<<endl;
    // int k;
    // cin>>k;
    // cout<<factorial(k)<<endl;
    int l;
    cin>>l;
    cout<<fibbo(l)<<endl;
}