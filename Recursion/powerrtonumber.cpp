#include <iostream>
using namespace std;
int powertonumber(int a,int b){
    if(b==0){
        return 1;
    }
    int ans=powertonumber(a,b-1);
     return  a*ans;


}
int main(){
    int a=3;
    int b=11;
    int answerr=powertonumber(a,b);
    cout<<answerr<<endl;
}
 