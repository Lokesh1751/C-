#include <iostream>
#include <stack>
using namespace std;
bool findRedundantBrackets(string &s)
{
stack<char> str;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*'){
			str.push(s[i]);
		}
		
		if(s[i]==')'){
			bool isreduntant=true;
			while(str.top()!='('){
				char top=str.top();
				if(top=='+' || top=='-' || top=='/' || top=='*'){
					isreduntant=false;
				}
				str.pop();
			}
			if(isreduntant==true){
				return true;
			}
			str.pop();
			
		}
	}
	return false;
}

int main(){
    string s;
    cin>>s;
   int ans= findRedundantBrackets(s);
   if(ans){
       cout<<"Reduntant Brakcets"<<endl;
   }
   else{
       cout<<"Not Reduntant"<<endl;
   }


}