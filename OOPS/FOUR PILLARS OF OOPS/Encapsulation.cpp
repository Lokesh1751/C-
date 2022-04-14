#include <iostream>
using namespace std;
class Student
{
    // this is called encapsulation 
    // where all information is private
private:
    string name;
    int age;
    int height;

public:
int getage(){
    return this->age;
}
};
int main()
{
    Student first;
    cout<<"SAB SAHI CHALLA";
    return 0;
}