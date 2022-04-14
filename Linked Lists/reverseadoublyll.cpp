#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node* prev;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev=NULL;
    }
};
void insertathead(node* &head,int d){
    node* temp=new node(d);
    head->next=temp;
    temp->prev=head;
    head=temp;
    temp->next=NULL;

}
void print(node* &tail){
    node* temp1=tail;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
}
int main()
{
    node *node1 = new node(5);
    node* head=node1;
    node* tail=node1;
    insertathead(head,5);
     insertathead(head,10);

     insertathead(head,12);
     insertathead(head,13);
    print(tail);
    
}