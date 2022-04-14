#include <iostream> // A inherit B and B inherit C
using namespace std;
// A)
class animal{
public:
int age;
int weight;
public:
void speak(){
    cout<<"Speaking"<<endl;
}
};

// B)
class dog:public animal{

 
};

// C)
class germanshepherd:public dog{

};
int main(){
    dog d;
    d.speak();
    cout<<d.age<<endl;
    germanshepherd g;
    g.speak();

}