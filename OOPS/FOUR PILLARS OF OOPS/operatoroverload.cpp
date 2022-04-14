#include <iostream>
using namespace std;
class b{
    public:
    int a;

};
class a :public b{
    public:
    int a;
  void operator+(b &object){
      int value1=this->a;
      int value2=object.a;
      cout<< "output is"<<" "<<value2-value1<<endl;

  }
   void operator() (){
      cout<< "main bracket hu bhai"<<" "<<this->a<<endl;

  }
};
int main(){
    b object1;
    a object2;
    object1.a=15;
    object2.a=18;
    object2+object1;
    object2();

}