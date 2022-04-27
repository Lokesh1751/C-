#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int arr[7] = {2, 2, 2, 1, 1, 1, 0};
    for (int i = 0; i < 7; i++)
    {
        v.push_back(arr[i]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 7; i++)
    {
        cout << v[i] << " ";
    }
}