#include <iostream>
using namespace std;
class Hero{
    public:
  int health;
  char level;
  // constructor
  Hero(){
      cout<<"constructor called"<<endl;
  }
  int gethealth(){
      return health;
  }
  // parameterised constructor
  Hero (int health){
     this->health = health;
  }

};
int main(){
    cout<<"hi"<<endl;
Hero h1(91); 
Hero *h= new Hero;
cout<<"hey"<<endl;
cout<<h1.health;
}