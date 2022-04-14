#include <iostream> //set bit
#include <bits/stdc++.h>
#include <math.h>
#include <string> // file to include string functions
#include <algorithm> // file to include sort function
using namespace std;
int setBit(int n,int pos){
     return (n | (1<<pos));
}
int main(){
      cout<<setBit(5,1)<<endl;
       
}