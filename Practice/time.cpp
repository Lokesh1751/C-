#include <iostream>
using namespace std;
class Time
{
public:
    int hours;
    int minutes;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
    }
    Time(int t)
    {
        hours = t / 60;
        minutes = t % 60;
    }
    void display()
    {
        cout << "Time:"
             << " " << this->hours << " "
             << "hr"
             << " "
             << ":"
             << " " << this->minutes << " "
             << "minutes" << endl;
    }
    friend class getval;
};
class getval
{
public:
    void display2(Time obj1)
    {
        cout << "Value is:"
             << " " << (60 * obj1.hours) + (obj1.minutes) << endl;
    }
};
int main()
{
    int duration;
    cin >> duration;
    Time t;
    // convert int to class type
    t = duration;
    t.display();
    getval obj2;
    obj2.display2(t);
}