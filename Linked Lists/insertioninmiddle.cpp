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
};

void insertatmiddle(node* &head,int position,int d){
    node* temp=head;
     int cnt=1;
     while(cnt<position-1){
         temp=temp->next;
         cnt++;
     }

     // creating a node
     node* nodetoinsert=new node(d);
     nodetoinsert->next=temp->next;
     temp-> next=nodetoinsert;







}
int main(){
      node *node1 = new node(10);
     node *head = node1;
    node *tail=node1;
    



}