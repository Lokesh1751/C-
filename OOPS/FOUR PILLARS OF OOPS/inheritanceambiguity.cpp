#include <iostream> // if function name is same thn how to solve this problem
using namespace std;
class a{
  public:
  void abc(){
      cout<<"class a"<<endl;
  }
};

class b{
 public:
 void abc(){
  cout<<"class b"<<endl;
 }
};

class c:public a,public b{
  
};
int main(){
    c obj1;
    obj1.a::abc(); // a ka abc wala function call krdo bcz dono me function ka name abc hi hai
    obj1.b::abc();
    // :: is scope resolution operator 

}