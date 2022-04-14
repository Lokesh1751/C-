#include <iostream>
using namespace std;
class Hero{
    private:
   int name;
   int age;
   public:
   int health;
   char level;

   int gethealth(){ // get value
       return health;
   }
   void sethealth(int h){ // set value 
       health=h;
   }
};
int main(){
      Hero h1; // static allocation


      h1.sethealth(70); // set value 
      cout<<"health is:"<<" "<<h1.gethealth()<<endl; // get health
       Hero *h= new Hero; // dynamic allocation
       h->sethealth(70); // set value 
      cout<<"health is:"<<" "<<h->gethealth()<<endl; // get health
      
}