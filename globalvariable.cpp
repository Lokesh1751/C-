#include <iostream>
using namespace std;
int score=15; // global variable (bad practice)
void a(int& i){
    cout<<i<<endl;
    cout<<score<<endl;
    // b(i);
}
void b(int& i){
    cout<<i<<endl;

}
int main(){
     int i=5;
     a(i);
     {
         int i=2;
         cout<<i<<endl;
     }
}