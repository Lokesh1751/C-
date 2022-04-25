#include <iostream>
#include <math.h>
using namespace std;
class Point
{
    int x, y, z;

public:
    Point(int x = 0, int y = 0, int z = 0)
    {
        this->x = x;
        this->z = z;
        this->y = y;
    }
    void displayans(Point pt, Point pt1)
    {
        int ans = pow((pt.x - pt1.x), 2) + pow((pt.y - pt1.y), 2) + pow((pt.z - pt1.z), 2);
        cout << "Distance is:"
             << " " << sqrt(ans) << endl;
    }
};
int main()
{
    Point pt(10, 9, 8);
    Point pt1(8, 9, 8);
    pt.displayans(pt, pt1);
}