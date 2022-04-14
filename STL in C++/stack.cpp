#include <iostream>
#include <stack>
using namespace std;
int main(){
// last in first out
stack<string> s;
s.push("love");
s.push("babbar");
s.push("sujal");

cout<<"Top Element"<<" "<<s.top()<<endl;
// jo sbse last me jayega vo sbse pehle bahr niklega
s.pop();
cout<<"Top Element"<<" "<<s.top()<<endl;
cout<<"Size of stack"<<" "<<s.size()<<endl;
cout<<"empty or not"<<" "<<s.empty()<<endl;
}