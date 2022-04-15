#include <iostream>
#include <stack>
using namespace std;
void sortedinsert(stack<int> &s,int num){
	if(s.empty() || (!s.empty() && s.top()<num)){
		s.push(num);
		return;
	}
	int n=s.top();
	s.pop();
	sortedinsert(s,num);
	s.push(n);
}
void sortStack(stack<int> &stack)
{
	// base case
	if(stack.empty()){
		return;
	}
	int num=stack.top();
	stack.pop();
	// recursive call
	sortStack(stack);
	sortedinsert(stack,num);
	
}
int main(){
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(12);
    sortStack(s);
    cout<<s.top()<<" ";
 s.pop();
  cout<<s.top()<<" ";
 s.pop();
  cout<<s.top()<<" ";
 s.pop();
  cout<<s.top()<<" ";
 s.pop();

   
}