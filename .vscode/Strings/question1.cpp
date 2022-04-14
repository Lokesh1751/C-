#include <iostream>
#include <string> // file to include string functions
#include <algorithm> // file to include sort function
using namespace std;
int main(){
    // //convert into uppercase
    // string str="ahauhhuhuu";
    // // difference b/w a & A is 32 ('a' - 'A'=32)
    // for(int i=0;i<str.length();i++){
    //     if(str[i]>='a'&& str[i]<='z'){
    //         str[i]-=32;
    //     }

    // }
    // cout<<str<<endl;
    // //convert again to lower case
    // for(int i=0;i<str.length();i++){
    //     if(str[i]>='A'&& str[i]<='Z'){
    //         str[i]+=32;
    //     }

    // }
    // cout<<str<<endl;

//inbuilt method
string s="bugugujgugjujvu";
     transform(s.begin(),s.end(),s.begin(),::toupper) ;
    //transform(begin,end(string get), from where start,to which type convert)
    cout<<s<<endl;
    // to lowercase
    transform(s.begin(),s.end(),s.begin(),::tolower) ;
    cout<<s<<endl;



}