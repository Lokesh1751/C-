#include <iostream> // two functions of samne name cannot be declared
using namespace std;

// FUNCTION OVERLOAfDING
class a{
    public:
    void  sayhello(){
        cout<<"hello love babbar"<<endl;
    }
     void  sayhello(string name){
        cout<<"hello love babbar"<<" "<< name<<endl;
    }
    // agr hmne returntype change krdia toh bhi error hi aayega 

    // hum name same tbhi rkh skte h jab uske arguments alag alag ho


};
int main(){
    a obj;
    obj.sayhello();

}