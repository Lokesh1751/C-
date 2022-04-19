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
        Complexnumber subtract(Complexnumber cn1)
        {
            Complexnumber c4;
            c4.real = real - cn1.real;
            c4.imaginery = imaginery - cn1.imaginery;
            return c4;
        }
        void conjugate(){
            if(imaginery>0){
                cout << real << "-" << imaginery << "i";
            }
            else{
                cout << real << "+" << imaginery << "i";
            }

        }
    };
    int main()
    {
        Complexnumber cn, cn1, c3,c4;
        cn1.read();
        cn1.display();
        cout << endl;
        cn.read();
        cn.display();
        cout << endl;
        c3 = cn.addition(cn1);
        c3.display();
        cout << endl;
        c4=cn.subtract(cn1);
        c4.display();
        cout<<endl;
        cn.conjugate();
        return 0;
    }