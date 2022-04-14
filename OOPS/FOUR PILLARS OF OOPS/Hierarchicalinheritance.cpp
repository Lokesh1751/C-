#include <iostream> // 1 parent 2 or more childs
using namespace std;
class a{
    public:
    void fuunc1(){
        cout<<"inside function 1"<<endl;
    }
};
class b :public a{
 public:
  void fuunc2(){
        cout<<"inside function 2"<<endl;
    }
};

class c :public a{
 public:
  void fuunc3(){
        cout<<"inside function 3"<<endl;
    }
};



int main(){
    a obj1;
    obj1.fuunc1();
    b obj2;
    obj2.fuunc1();
    c obj3;
    obj3.fuunc1();
    obj3.fuunc2(); // not called bcz b is not inherited with c

}