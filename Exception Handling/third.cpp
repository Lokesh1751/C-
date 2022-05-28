#include <iostream>
using namespace std;
int main(){
    try{
        throw 10;
    }
    catch(char *excp){
        cout<<"caught"<<" "<<excp<<endl;
    }
    catch(...){
cout<<"Default"<<endl;
    }
}