#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int>& s, int x){
	// base case
	if(s.empty()){
		s.push(x);
		return;
	}
	int num=s.top();
	s.pop();
	solve(s,x);
	s.push(num);
	
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
   solve(myStack,x);
	return myStack;
}
int main(){
    stack <int> s;
    s.push(10);
    s.push(20);
    int x;
    cin>>x;
    pushAtBottom(s,x);
 cout<<s.top()<<" ";
 s.pop();
  cout<<s.top()<<" ";
 s.pop();
  cout<<s.top()<<" ";
 s.pop();
  cout<<s.top()<<" ";
 s.pop();

}