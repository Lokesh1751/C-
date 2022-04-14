#include <iostream>
using namespace std;
int main(){
    //two types of arthematic operators = 1)binary=+,-,*,/,%
    // 2) unary=++,--
    // int i=1;
    //   //1   //3
    // i=i++ + ++i;
    // cout<<i<<endl;

    int i=1;
    int j=2;
    int k;
      //1 //2 //1   //2   //3   //4
    k=i + j + i++ + j++ + ++i + ++j;
    cout<<k<<endl;
    return 0;
}

// a++ value add after this statement execute
//++a firstly added thn statement executes