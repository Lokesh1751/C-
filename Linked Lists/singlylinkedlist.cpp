#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next; //pointer to  get address of next node

    // constructor
    node(int data)
    {
        this->data = data;  
        this->next = NULL;
    }
};
int main()
{
    node* node1 = new node(10);
    cout << node1->data << "  ";
    cout << node1->next << endl;
}