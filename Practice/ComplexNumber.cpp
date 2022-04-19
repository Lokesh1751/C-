#include <iostream>
using namespace std;
class Complexnumber{
int real;
int imaginery;
public:
void read(){
    cout<<"Enter real part:"<<endl;
    cin>>real;
    cout<<"Enter Imaginery part"<<endl;
    cin>>imaginery;
}
void display(){
    cout<<real<<"+"<<imaginery<<"i";
}
};
int main(){
    Complexnumber cn;
    cn.read();
    cn.display();

}