#include <iostream>
using namespace std;
class Complexnumber
{
    int real;
    int imaginery;

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
        if (imaginery > 0 && imaginery > 0)
        {
            cout << real << "+" << imaginery << "i";
        }
    }
};
int main()
{
    Complexnumber cn, cn1;
    cn.read();
    cn.display();
    return 0;
}