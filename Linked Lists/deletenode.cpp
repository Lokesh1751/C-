#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data" << endl;
    }
};

void insertathead(node *&head, int d)
{
    // new node create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void insertattail(node *&tail, int d)
{
    // new node create
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertatmiddle(node *&tail, node *&head, int position, int d)
{
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }
    node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    // creating a node
    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void deletenode(int position, node *&head)
{
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        node *curr = head;
        node *prev = NULL;
        int cnt = 1;
        while (cnt <= position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        delete curr;
    }
}
int main()
{
    node *node1 = new node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    node *head = node1;
    node *tail = node1;
    print(head);
    insertathead(head, 12);
    cout << endl;
    print(head);
    cout << endl;
    insertathead(head, 15);
    print(head);

    // insertattail(tail, 12);
    // cout << " ";
    // print(tail);
    // cout << " ";
    // insertattail(head, 15);
    // print(head);

    insertatmiddle(tail, head, 3, 22);
    deletenode(1, head);
    print(head);
}