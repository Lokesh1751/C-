#include <iostream>
using namespace std; // destructor se memory free ho jati hain
class hero{
    public:
    // destructor called
    ~hero(){
        cout<<"destructor called"<<endl;
    }
};
int main(){
    // for static allocation destructor automattically called 
    hero a;

    hero *b=new hero();
    delete b; // now destructor called for dynamic allocation
   
}