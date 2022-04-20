#include <iostream>
using namespace std;
class demo{
public:
static int count;
demo(){
    count++;
}
};
int demo::count=0;
int main()
{
    demo obj;
    cout<<obj.count<<endl;
    demo obj1;
    cout<<obj1.count<<endl;
}