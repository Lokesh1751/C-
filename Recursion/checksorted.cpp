#include <iostream>
using namespace std;
bool issorted(int arr[], int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return true;
    }
    else if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingpart = issorted(arr + 1, n - 1);
        return remainingpart;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    bool ans = issorted(arr, 5);
    if (ans == 0)
    {
        cout << "Array is not Sorted";
    }
    else if (ans == 1)
    {
        cout << "Array is Sorted";
    }
    return 0;
}