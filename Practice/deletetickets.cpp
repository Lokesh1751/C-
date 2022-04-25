#include <iostream>
using namespace std;
class Book
{
public:
    int c;
     int count=0;
    Book(int p)
    {
        this->count += p;
    }
    void canceltickets(int c)
    {
        this->c = c;
    }

    ~Book()
    {
        count -= c;
        cout << "Now Count is:"
             << " " << count << endl;
    }
};
//int Book::count = 0;
int main()
{
    Book Sujal(5);
    Book Harsh(9);
    cout << "Before Count is:"
         << " " << Harsh.count << endl;
    Harsh.canceltickets(2);
    Sujal.canceltickets(1);
    cout << "Before Count is:"
         << " " << Sujal.count << endl;
    
}