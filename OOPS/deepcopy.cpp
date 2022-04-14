#include <iostream>
using namespace std; 
class Hero{
  char level;
  int health;
  Hero(Hero& suresh){
       this->health=suresh.health;
       this->level=suresh.level;
   }

};
int main(){
    Hero hero1(4,50);


}