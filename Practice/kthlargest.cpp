// kth largest sum subarray
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> ans;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[i] + arr[j]);
        }
    }
    cout<<"Kth Largest Element is :"<<" ";
    cout<<ans[2]<<endl;
}