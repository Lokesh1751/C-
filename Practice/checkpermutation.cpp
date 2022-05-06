#include <iostream>
using namespace std;
int main()
{
    string str1 ;
    string str2 ;
    cout<<"Enter First String:"<<" ";
    cin>>str1;
      cout<<"Enter Second String:"<<" ";
    cin>>str2;
    int count=0;
    if(str1.length()==str2.length()){
    for (int i = 0; i < str1.length(); i++)
    {
        for (int j = 0; j < str2.size(); j++)
        {
            if (str1[i] == str2[j])
            {
                 count++;
            }
             else{
                 continue;
             }
        }
    }
    }
    if(count==str1.length()){
        cout<<"TRUE"<<endl;
    }
     if(str1.length() !=str2.length() && str1.length()!=count){
        cout<<"FALSE"<<endl;
    }
}