#include <iostream>
using namespace std;
struct arr
{
    int petrol;
    int distance;
};
int main()
{
    arr ar[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> ar[i].petrol;
        cin >> ar[i].distance;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i].petrol<<" ";
        cout << ar[i].distance<<endl;;
    }
}