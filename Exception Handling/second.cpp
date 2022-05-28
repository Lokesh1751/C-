#include <iostream>
using namespace std;
int main(){
    int x=-1;
    cout<<"Before try"<<endl;

    try{
        cout<<"Inside try"<<endl;
        if(x<0){  
            throw x;
            cout<<"After throw"<<endl;
        }

    }
    catch(int ex){
        cout<<"exception caught"<<" "<<ex<<endl;
    }
}