#include <iostream> //clear bit
#include <bits/stdc++.h>
#include <math.h>
#include <string> // file to include string functions
#include <algorithm> // file to include sort function
using namespace std;
int clearBit(int n,int pos){
    int mask= ~(1<<pos);
    return (n & mask);
}
int main(){
 cout<<clearBit(5,2)<<endl;
}