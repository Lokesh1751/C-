#include <iostream>
#include <math.h>
using namespace std;
int factorial(int num){
      int facto=1;
      for(int i=1;i<=num;i++){
          facto= facto*i;
      }
      return facto;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}