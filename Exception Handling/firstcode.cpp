#include <iostream>
using namespace std;
int main(){
    int numerator,denomerator,result;
    cout<<"Enter the value:"<<endl;
    cin>>numerator>>denomerator;
    try
    {
        if(denomerator==0){
        throw denomerator;
        }
        result=numerator/denomerator;
    }
   catch(int ex)
   {
       cout<<"Divide by zero not allowed"<<" "<<ex<<endl;
   }
   cout<<"Division is:"<<" "<<result<<endl; 
}