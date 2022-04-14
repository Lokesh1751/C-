#include <iostream>
using namespace std;
int main()
{
    // int arr[10] = {2, 5, 6};
    // cout << "adress of first memory block is" << arr << " " << endl;
    // cout << "adress of first memory block is" << &arr[0] << " " << endl;
    // cout << "4th"
    //      << " " << *arr << endl;
    // cout << "5th"
    //      << " " << *arr + 1 << endl;
    // cout << "6th"
    //      << " " << *(arr + 1) << endl;

    // cout << "7th"
    //      << " " << *(arr) + 1 << endl;
    // cout << "8th"
    //      << " " << (arr[2]) << endl;
    // cout << "9th"
    //      << " " << *(arr + 2) << endl;

    // cout << "10th"
    //      << " " << 2 [arr] << endl; // important
    int temp[10]={1,2};
    int *poin = &temp[0];
    cout << sizeof(poin) << endl; // size of address is 8 bytes
    cout << sizeof(&poin) << endl;
    cout<<"1st"<< sizeof(*temp)<<endl;
      cout<<"2nd"<< sizeof(&temp)<<endl; //8 bytes
}