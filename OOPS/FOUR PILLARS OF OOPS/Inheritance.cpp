#include <iostream>
using namespace std;
class human
{ // parent class
public:
    int height;
    int weight;
    int age;

public:
    int getage()
    {
        return this->age;
    }
    void setweight(int w)
    {
        this->weight = w;
    }
};

class male : public human
{ // child class get acces properties of human bcz it is inherited
public:
    string color;
    void sleep()
    {
        cout << "Male Sleeping";
    }
};
int main()
{
    male obj1;
    cout << obj1.age << endl;
    cout << obj1.weight << endl;
    cout << obj1.height << endl;
    cout << obj1.color << endl;
obj1.sleep();
obj1.setweight(65); cout<<endl;
cout << obj1.weight << endl;

}