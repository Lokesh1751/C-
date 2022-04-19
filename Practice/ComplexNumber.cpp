#include <iostream>
using namespace std;
class Complexnumber
{
    public:
    int real;
    int imaginery;
// Complexnumber(int x,int y){
//    this->real=x;
//    this->imaginery=y;
    


// }
Complexnumber(){
    this->real=0;
    this->imaginery=0;
}
public:
    void read()
    {
        cout << "Enter real part:" << endl;
        cin >> real;
        cout << "Enter Imaginery part" << endl;
        cin >> imaginery;
    }
    void display()
    {
        if (imaginery >= 0 && real >= 0)
        {
            cout << real << "+" << imaginery << "i";
        }
    }
};
int main()
{
    Complexnumber cn;
    cn.read();
    cn.display();
    return 0;

       
 
}