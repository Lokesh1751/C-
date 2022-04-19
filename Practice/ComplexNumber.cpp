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
    Complexnumber()
    {
        this->real = 0;
        this->imaginery = 0;
    }

public:
    void read()
    {
        cout << "Enter real part:"
             << " ";
        cin >> real;
        cout << "Enter Imaginery part"
             << " ";
        cin >> imaginery;
    }
    void display()
    {
        if (imaginery >= 0 && real >= 0)
        {
            cout << real << "+" << imaginery << "i";
        }
    }
    Complexnumber addition(Complexnumber cn1)
    {
        Complexnumber c3;
        c3.real = real + cn1.real;
        c3.imaginery = imaginery + cn1.imaginery;
        return c3;
    }
};
int main()
{
    Complexnumber cn,cn1,c3;
    cn1.read();
    cn1.display();
    cout << endl;
    cn.read();
    cn.display();
    cout<<endl;
    c3 = cn.addition(cn1);
    c3.display();
    return 0;
    
}