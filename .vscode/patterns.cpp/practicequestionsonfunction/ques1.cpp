#include <iostream> //sum of first n natural numbers
using namespace std;
int firstn(int num){
    int sum=0;
       for(int i=1;i<=num;i++){
           sum+=i;
       }
       return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<firstn(n)<<endl;;
    return 0;
}