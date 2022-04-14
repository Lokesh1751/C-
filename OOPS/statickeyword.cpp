#include <iostream>
using namespace std;
class hero{
    public:
  static int timetocomplete;
}; 

int hero::timetocomplete=5;

int main(){
    // no need to create an object
 cout<<hero::timetocomplete<<endl;

 // by crete an object
 // bad practice hai ye mtt kro 
 hero a;
 cout<<a.timetocomplete<<endl;

 hero b;
 b.timetocomplete=10;
 cout<< a.timetocomplete<<endl;
 cout<< b.timetocomplete;

}