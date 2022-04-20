#include <iostream>
using namespace std;
class booking
{
public:
    static int count;

public:
    booking(int p)
    {
        count += p;
    }
};
int main()
{
    booking b(10);

    cout << b.count << endl;
    booking b1(10);
    cout << b1.count << endl;
}
