#include <iostream>
#include <cmath>
using namespace std;
bool check(int x,int y,int z){
    int a=max(x,max(y,z));
    if(a==x){
        if(pow(x,2)==pow(y,2)+pow(z,2)){
            return true;
        }
        else{
            return false;
        }
    }
    else if(a==y){
        if(pow(y,2)==pow(x,2)+pow(z,2)){
            return true;
        }
        else{
            return false;
        }
    }
    else if(a==z){
        if(pow(z,2)==pow(y,2)+pow(x,2)){
            return true;
        }
        else{
            return false;
        }
    }
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"Pythagorean Triplet";
    }
    else{
        cout<<"not a pythagorean triplet";
    }
}