#include <iostream>
using namespace std;
class Emp{
int empid;
int empsal;
public:
Emp(int id=5,int sal=0){
    this->empid=id;
    this->empsal=sal;
}
void display(){
    cout<<"Id:"<<" "<<empid<<endl<<"Salary:"<<" "<<empsal<<endl;
}
};
int main(){
    Emp emp1;
    emp1.display();
    Emp emp2(101,50000);
    emp2.display();
    Emp emp3(emp2);
    emp3.display();

}