#include <iostream>
using namespace std;
int main(){
     int n=6;
     if(n%2==0 && n%3==0){
         cout<<"Divisible by Both"<<endl;
     }
     else if(n%2==0){
         cout<<"Divisible by 2 only"<<endl;
     }
     else if(n%3==0){
         cout<<"Divisible by 3 only"<<endl;
     }
     else{
         cout<<"Divisible By none"<<endl;
     }
}