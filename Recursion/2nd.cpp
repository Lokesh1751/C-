#include <iostream>
#include <math.h>
using namespace std;
void reachehome(int src,int destination){
       // base case 
       if(src==destination){
           cout<<"pahunch gya"<<endl;
           return;
       }   
        reachehome(src+1,destination);
        cout<< "Source case is"<< " "<<src<<" " << "destination case is"<<" "<<destination <<endl;

}
int fibboseries(int n){
    // base case
    if(n ==0){
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    int ans=fibboseries(n-1)+fibboseries(n-2);
    return ans;

    
}
int waytoclimbstairs(int m){
    if(m<0){
        return 0;
    }
    if (m==0)
    {
        return 1;
    } 
    int ans=waytoclimbstairs(m-1)+waytoclimbstairs(m-2);
    return ans;
    
}
int saydigits(){

}
int main(){
    // int destination=10;
    // int src1=1;
    // reachehome(src1,destination);
//    int n;
//    cin>>n;
//    int answ= fibboseries(n);
//    cout<<answ<<endl;
int m;
cin>>m;
int answw=waytoclimbstairs(m);
cout<<answw<<endl;
 
   
}