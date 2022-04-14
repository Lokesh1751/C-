#include <iostream>
using namespace std;
int update(int n){ // pass by value create a copy of memeoryn 
    n++;
}
int update2(int& j){
    j++;
}  

// (IMPORTENT) function ka inputtype int& nahi lena haii


int main(){
    // // ek hi variable ke do name dena is called refernce variable
    // int i=5;
    // int& j=i;
    // cout<<i<<endl;
    // i++;
    //   cout<<i<<endl;
    //   j++;
    //     cout<<i<<endl;

    // why we need reference variable
    int n=5;
    cout<<"Before"<<n<<endl;
    update(n);
    cout<<"After"<<n<<endl;

    cout<<"Before"<<n<<endl;
    update2(n);
    cout<<"After"<<n<<endl; // now when we add reference variable then it updated the value and get new name
    ;

}