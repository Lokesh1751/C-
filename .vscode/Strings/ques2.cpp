#include <iostream>
#include <string> // file to include string functions
#include <algorithm> // file to include sort function
using namespace std;
int main(){
    string str="53214";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;
}