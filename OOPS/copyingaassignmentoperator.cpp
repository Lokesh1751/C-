#include <iostream>
using namespace std;
class hi{
    public:
   int health;
   int level;
   hi(int h,int l){
       this->health=h;
       this->level=l;
   }
};
int main(){

    hi hi1(4,50);
    hi hi2(5,50);
    hi1=hi2;
    cout<<hi1.health<<endl ;
    cout<<hi2.health;


}