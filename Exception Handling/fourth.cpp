#include <iostream>
using namespace std;
int main(){
    try{
        throw 'a';
    }
    catch(int x){
        cout<<"caught"<<" "<<x<<endl;
    }
    catch(...){
        cout<<"default"<<endl;
    }
    return 0;
}