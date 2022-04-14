#include <iostream>
#include <string> // file to include string functions
#include <algorithm> // file to include sort function
using namespace std;
int main(){
 // 1) append two strings
    // string s1="fam";
    // string s2="ily";
    // //first method
    // s1.append(s2);
    // cout<<s1<<endl;
    // //2nd method
    // cout<<s1+s2<<endl;

// 2) to get particular character in string
    // string s3="family";
    // cout<<s3[2];

// 3) clear function
    //  string abc="bhhkuhedhkj hukfhkuhkuuh hbehuke";
    //  abc.clear();
    //  cout<<abc;

// 4) compare two strings
    // string s4="abc";
    // string s5= "xyz";
    // //if both are equal thn it returns 0
    // if(s4.compare(s5)==0){
    //     cout<<"both r equal"<<endl;;
    // }
    // else{
    //     cout<<"not equal"<<endl;;
    // }
    // cout<<s5.compare(s4)<<endl;;

// 5) empty string
    // string ab="sujalangi";
    // // ab.clear();
    // if (ab.empty())
    // {
    //     cout<<"string is empty";
    // }
    // if(!ab.empty()){ // not empty
    //     cout<<"string is not empty";
    // }

//6) erase function
    //  string s7="nincompoop";
    //  s7.erase(3,2); //erase(index from erase start,number of character want to erase)
    //  cout<<s7<<endl;

//7) find function
    // string s8="nincompoop";
    // cout<<s8.find("com")<<endl;
     
// 8) insert function
    //  string s9="nincompoop";
    //  s9.insert(2,"lol"); //insert(index,string want to insert)
    //  cout<<s9<<endl;

// 9)  length function
    //  string s10="sujalangi";
    //  cout<<s10.size()<<endl;
    //  cout<<s10.length()<<endl;
    // for(int i=0;i<s10.length();i++){
    //     cout<<s10[i]<<" ";
    // }

// 10) substring function
    // string s11="sujalangi";
    // string s= s11.substr(5,3);//substr(index,no. of characters)
    // cout<<s;

// 11) string to integer 
    // string s12="786";
    // int x=stoi(s12);
    // cout<<x+4<<endl;

// 12) integer to string
    //   int x=786;
    //   string ans=to_string(x)+"2";
    //   cout<<ans<<endl;

// 13) sort function in string
    //   string s13="dcba";
    //   sort(s13.begin(), s13.end());
    //   cout<<s13<<endl;

// 14) to uppercase & lowercase 
     string s="bugugujgugjujvu";
     transform(s.begin(),s.end(),s.begin(),::toupper) ;
    //transform(begin,end(string get), from where start,to which type convert)
    cout<<s<<endl;
    // to lowercase
    transform(s.begin(),s.end(),s.begin(),::tolower) ;
    cout<<s<<endl;







}