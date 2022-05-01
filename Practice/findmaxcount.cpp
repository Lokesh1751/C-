#include <iostream>
#include <math.h>
#include <map>
#include <limits.h>
using namespace std;
int main()
{
    int arr[8] = {9, 1, 9, 6, 7, 9, 7};
    int count;
    int maxx = INT_MIN;
    map<int, int> m;
    for (int i = 0; i < 8; i++)
    {
        count = 0;
        for (int j = i; j < 8; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                maxx = max(maxx, count);
            }
        }
        m.insert({arr[i], count});
    }
    for (auto i : m)
    {
        //cout << i.first << " " << i.second<<endl;
        if (i.second == maxx)
        {
            cout << i.first << endl;
        }
    }
}