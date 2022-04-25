#include <iostream>
using namespace std;
class XYZ{
private:
int n=100;
friend class ABC;

};
class ABC{
   public:
   void dis(XYZ obj){
       cout<<obj.n<<endl;
    }

};
int main(){
   XYZ obj1;
   ABC obj;
   obj.dis(obj1);
}