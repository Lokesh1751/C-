#include <iostream>
#include <stack>
using namespace std;
void insertAtbottom(stack<int> &stack,int x){
	// base case
	if(stack.empty()){
		stack.push(x);
		return ;
		
	}
	int num=stack.top();
	stack.pop();
	insertAtbottom(stack,x);
	stack.push(num);
}
void reverseStack(stack<int> &stack) {
    if(stack.empty()){
		return;
	}
	int num=stack.top();
	stack.pop();
	// recursive call
	reverseStack(stack);
	insertAtbottom(stack,num);
}
int main(){
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(12);
    reverseStack(s);
    cout<<s.top()<<" ";
 s.pop();
  cout<<s.top()<<" ";
 s.pop();
  cout<<s.top()<<" ";
 s.pop();
  cout<<s.top()<<" ";
 s.pop();

}