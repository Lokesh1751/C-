#include <iostream>
#include <stack>
using namespace std;
int main(){
    // creation of stack
  stack <int> s;
  //push
  s.push(2);
  s.push(3);

  // pop
  s.pop();
  // printing top element
  cout<<"printing top element"<<" "<<s.top()<<endl;
  if(s.empty()){
      cout<<"Stack is Empty"<<endl;
  }
  else{
      cout<<"Stack isNot Empty"<<endl;
  }
  cout<<"size of stack"<<" "<<s.size()<<endl;
}