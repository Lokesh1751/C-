#include <iostream>
using namespace std;
bool checkpaklindrome(string str,int i,int j){
   if(i>j){
       return true ;
   }
   if(str[i]!=str[j]){
       return false;
   }
   else{
       return checkpaklindrome(str,i+1,j-1);
   }
}
int main(){
    string name="abccba";
    cout<<endl;
    bool ispalindrome=checkpaklindrome(name,0,name.length()-1);
    if(ispalindrome){
        cout<<"it is a palindrome";
    }
    else{
        cout<<" not a palindrome";
    }
}