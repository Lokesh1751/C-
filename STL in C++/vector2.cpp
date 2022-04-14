#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a(5,1); // a(number of elements, value)
    for(int i:a){
        cout<<i<<" ";

    } cout<<endl;

    // copy a vector
    vector<int> last(a);
     for(int i:last){
        cout<<i<<" ";

    }

} 