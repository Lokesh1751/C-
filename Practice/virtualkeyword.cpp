#include <iostream>
using namespace std;
class Shape{
    public:
int dir1;;

Shape(){
    dir1=10;
}
virtual void area()=0;
};
class rec:public Shape{
    public:
int dir2=10;
void area(){
    cout<<dir1*dir2<<endl;
}
};
int main(){
    //Shape s; 
    // object of abstract class not allowed
   // s.area();
rec r;
r.area();
}