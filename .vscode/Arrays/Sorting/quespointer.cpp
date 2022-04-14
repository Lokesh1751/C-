#include <iostream>
using namespace std;
void incriment(int *a){
    *a++;
}
int main(){
    int a=10;
    int *aptr=&a;
    incriment(aptr);
    cout<<a<<endl;
}
