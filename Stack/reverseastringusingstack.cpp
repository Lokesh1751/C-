#include <iostream>
#include <stack>
using namespace std;
int main(){
    string str;
    cin>>str;
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char ch1= str[i];
        s.push(ch1);
    }
    string ans="";
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"Reversed String is"<<" "<<ans<<endl;
}