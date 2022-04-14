#include <iostream>
using namespace std;
class animal
{
public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};
class dog : public animal
{
public: 
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    dog obj;
    obj.speak(); // output barking
    animal obj1;
    obj1.speak(); // output speaking
}