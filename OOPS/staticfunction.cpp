#include <iostream>
using namespace std;
class hello{
    public:
 static int heloo; 

// static function (it not includes this keyword)
 static int random(){
     // it only acces static member
     return  heloo;
 }  
};
int hello::heloo=10;
int main(){
    cout<<hello::random()<<endl;
   
}