#include <iostream> //get bit
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
bool ispowerof2(int n){
    return (n && !(n & n-1));
}
int main(){
   cout<<ispowerof2(14);
}