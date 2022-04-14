   #include <iostream>
#include <math.h>
using namespace std;
void saydigit(int n){
    if(n==0){
        return;
    }
    string arr[10]={"zero","one","two","three"
    ,"four","five","six","seven","eight","nine"
    };
    int digit= n%10;
    n=n/10;

   saydigit(n);  
   cout<<arr[digit]<<" ";
}
int main(){
   int num=432;
   saydigit(num);

}
