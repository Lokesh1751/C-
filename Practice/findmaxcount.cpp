#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
int main()
{
    int arr[8] = {1,2,3,4,5,6,1,10};
    int count;
    int maxx = INT_MIN;
    int ans=0;
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
    }
    cout << count << endl;
}