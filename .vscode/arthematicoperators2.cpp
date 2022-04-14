#include <iostream>
using namespace std;
int main(){
   //ques 1 
    // int i=0;
    //   //0   //0   //1   //1
    // i=i++ - --i + ++i - i--;
    // cout<<i<<endl;

  //ques 2  
//   int i=1,j=2,k=3;
//            //1   //2   //3
//     int m= i-- - j-- - k--;
//     cout<<i<<endl; //0
//     cout<<j<<endl;//1
//     cout<<k<<endl;//2         i=10,j=19
//     cout<<m<<endl;//-4
   //ques 3

   int i=10 ,j=20;
          //10  //9   //19  //20  //9    //20 //10  19
   int k= i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

   cout<<i<<endl; //10
   cout<<j<<endl; //20
   cout<<k<<endl; //-20
}