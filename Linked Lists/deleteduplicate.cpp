#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertattail(node *head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head=temp;
}
void print(node * &head)
{
    node* temp=head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    insertattail(head, 12);
    insertattail(head, 1);
    insertattail(head, 9);
    insertattail(head, 13);
    print(head);
}