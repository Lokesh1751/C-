#include <iostream> // a node created prev data address and next data address and data value
using namespace std;
class doublenode
{
public:
    int data;
    doublenode *prev;
    doublenode *next;

    // constructor
    doublenode(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~doublenode(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data"<<" "<<data<<endl;
    }
};
void print(doublenode *head)
{
    doublenode* temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}
int getlength(doublenode *head)
{
    doublenode *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    cout << endl;
    cout << len << endl;
}
void insertathead(doublenode* &head, int d)

{
    if(head==NULL){
doublenode* temp=new doublenode(d);
head=temp;

    }
    else{
    doublenode *temp = new doublenode(d);
    temp->next = head;
    head->prev = temp;
    head = temp;}
}
void insertattail(doublenode* &tail,int d){
    if(tail==NULL){
    doublenode* temp=new doublenode(d);
    tail=temp;
    }
    else{
    doublenode *temp = new doublenode(d);
    tail->next=temp;
    temp->prev=tail;
     tail=temp;}
}
void insertatposition(doublenode* &tail,doublenode* &head,int position,int d){
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }
     doublenode *temp = head;
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
    doublenode *nodetoinsert = new doublenode(d);
    nodetoinsert->next = temp->next;
    temp->next->prev  = nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;

}
void deletenode(int position, doublenode *&head)
{
    if (position == 1)
    {
        doublenode *temp = head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        doublenode *curr = head;
        doublenode *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main()
{
    doublenode* node1 = new doublenode(10);
    doublenode*  head = node1;
    doublenode* tail=node1;
    print(head);
    // getlength(head);
    insertathead(head, 11);
     insertathead(head, 12);
     insertathead(head, 13);
     insertathead (head, 14);
      print(head);
    insertattail(tail, 11);
     insertattail(tail, 12);
     insertattail(tail, 13);
     insertattail(tail, 14);
      print(head);
     insertatposition(tail,head,2,100);
     insertatposition(tail,head,1,101);
     insertatposition(tail,head,8,108);
    print(head);
    deletenode(12,head);
    print(head);

}