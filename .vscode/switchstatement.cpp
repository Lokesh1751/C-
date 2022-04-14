#include <iostream>
using namespace std;
int main()
{
    char button;
    cout << "Input a character: ";
    cin >> button;

    //  if(button=='a')
    //  {
    //      cout<<"NAMASTE";
    //  }
    //  else if (button=='b'){
    //      cout<<"hello";

    //  }
    //  else if(button=='c'){
    //      cout<<"hey";
    //  }
    //  else{
    //      cout<<"no";
    //  }

    switch (button)
    {
    case 'a':
        cout << "hello" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Salut" << endl;
        break;
    case 'd':
        cout << "hola" << endl;
        break;
    case 'e':
        cout << "Ciano" << endl;
        break;

    default:
        cout << "i am still learning more";
        break;
    }
}

// now by switch statement
