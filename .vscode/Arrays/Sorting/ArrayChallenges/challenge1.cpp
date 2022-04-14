#include <iostream> //max till i
#include <math.h>
using namespace std;
int main(){
    int arr[6]={1,0,5,4,6,8};
    int mx=-1999999999999;
    for(int i=0;i<=5;i++){
        int mxx= max(mxx,arr[i]);
        cout<<mxx<<" ";
    }
}