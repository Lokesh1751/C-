// kth largest sum subarray
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n=5;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[i] + arr[j]);
        }
    }
    sort(ans.begin(),ans.end());
    int k;
    cout<<"K is:"<<" ";
    cin>>k;
     cout<<"Kth Largest Element is :"<<" ";
    cout<<ans[n-k-1]<<endl;
}