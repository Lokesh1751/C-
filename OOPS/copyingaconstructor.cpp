#include <iostream>
using namespace std;
class hello{
    public:
   int health;
   int level;
   hello(int h,int l){
        level=l;
        health=h;
   } 
   // make copy constructor
   hello(hello& suresh){
       this->health=suresh.health;
       this->level=suresh.level;
   }
};
int main(){
     hello sujal(91,4);
      cout<<sujal.health<<endl;

      // COPY CONSTRUCTOR default constructor 
     hello suresh(sujal); // copying a constructor
       cout<<suresh.health<<endl  ;

       // create copy constructor
      cout<< suresh.health;
}