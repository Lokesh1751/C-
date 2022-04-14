#include  <iostream>
#include "hero.cpp" // include hero.cpp file in this file
using namespace std;
// creating a class
class Hero{
    public:
    // properties of class
    char name[100];
   int health;
//    private: // now level is private
   char level;


}; 
int main(){
    // class to object
    Hero ramesh;
    //cout<<"size :"<<" "<<sizeof(h1);
    // in case of empty class size of h1 is 1 byte
     cin>>ramesh.health;
     cin>>ramesh.level;
    cout<<"Health is:"<<" "<<ramesh.health<<endl;
     cout<<"Level is:"<<" "<<ramesh.level;


}// by default health nd level is private property
