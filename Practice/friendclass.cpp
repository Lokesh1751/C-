#include <iostream>
using namespace std;
class XYZ{
private:
int num=100;
public:
friend void display(XYZ obj);
};
void display(XYZ obj){
    cout<<obj.num<<endl;
}
int main(){
    XYZ obj1;
    display(obj1);

}