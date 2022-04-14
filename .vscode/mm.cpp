#include <iostream>
using namespace std;

int main() {
    // int n;
    // cin>>n;
    // bool flag=true;
	// for(int i=2;i<n;i++){
	//      if(n%i==0){
	//          flag=false;
	//          cout<<"non prime ";
    //          break;
	//      }
	// }
	// if(flag==true){
	//     cout<<"prime number";
	// }
	// return 0;
	int n;
    cin>>n;
    bool flag=true;
	for(int i=2;i<n;i++){
	     if(n%i!=0){
	         cout<<i<<endl;
	     }
	}
	return 0;
}