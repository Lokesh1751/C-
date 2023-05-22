#include <iostream>
#include <vector>
#include <limits.h>
#include <map>
using namespace std;
int main()
{
    map<int, int> mp;
    int k=2;
    vector<int> v = {1, 1, 1, 2, 2, 3};
    for (auto i : v)
    {
        mp[i]++;
    }
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        int maxi = INT_MIN;
        int ans1 = 0;
        for (auto k : mp)
        {
            if (k.second > maxi)
            {
                maxi = k.second;
                ans1 = k.first;
            }
        }
        mp[ans1] = -1;
        ans.push_back(ans1);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
}
