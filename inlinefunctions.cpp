#include <iostream>
using namespace std;
void func(int a, int b)
{
    a++;
    b++;
    cout << a << b << endl;
}
inline  int getmax(int& a,int& b){ // inline function
    return (a>b )? a:b;
}
int main()
{
     int ans=0;
    int a = 1, b = 3;
    //func(a, b);
    ans=getmax(a,b);
    cout<<ans<<endl;
    a=a+3;
    b=b+1;
    ans=getmax(a,b);
       cout<<ans<<endl;

    // condition if true(a) else(b)


}