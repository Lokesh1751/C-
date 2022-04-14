#include <iostream>
using namespace std;
void update(int **p)
{
    p = p + 1;
    *p = *p + 1;   // change hoga
    **p = **p + 1; // change hoga
}
int main()
{
    int i = 6;
    int *p = &i;
    cout << &p << endl;
    cout << p << endl;
    // int **p = &p;
} 