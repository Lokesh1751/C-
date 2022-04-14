#include <iostream>
using namespace std;
int main(){
    string str="abc";
    for(int i=0;i<str.size();i++){
        for(int j=i;j<=i+1;j++){
            swap(str[i],str[j]);
            cout<<str <<" ";
        }
    }
}