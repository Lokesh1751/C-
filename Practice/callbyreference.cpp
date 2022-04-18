#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout<<"Before Swap:"<<endl;
    cout << a << " " << b << endl;
    swap(&a, &b);
    cout<<"After Swap:"<<endl;
    cout << a << " " << b << endl;
}