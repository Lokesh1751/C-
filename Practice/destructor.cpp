#include <iostream>
using namespace std;
class Demo{
int x;
public:
Demo(int p=0){
   this-> x=p;

}
~Demo(){
    cout<<"Destructor Called"<<endl;
}
};
int main(){
    Demo obj;
   Demo *obj1=new Demo();
   delete obj1;

}