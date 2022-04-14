#include <iostream> // only required things dikhado 
using namespace std;
class abstraction{
    public:
   int a;
   private:
   int b;
};
int main(){
    abstraction obj;
    cout<<obj.a<<endl; // public declared
     cout<<obj.b<<endl; // private declared(not give output)

}