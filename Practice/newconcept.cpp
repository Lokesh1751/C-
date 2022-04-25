#include <iostream>
using namespace std;
class a{
int x;
public:
a(){
    x=0;
}
//overloaded
a(int x){
    this->x=x;
}
a(int y=0){
    this->x=y;
}
void display(){
    cout<<x<<endl;
}
};
int main(){
a obj;
a obj1(5);
obj.display();
obj1.display();
}