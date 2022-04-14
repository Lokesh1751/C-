#include <iostream>
using namespace std;
class node{
    public:
int data;
node* next;
// constructor
node(int d){
    this->data=d;
    this->next=NULL;
}
~node(){
    int value = this->data;
    if(this->next!=NULL){
        delete next;
        next=NULL;
    }
}
};

void insertnode(node* &tail,int element,int d){
    // assuming that the element is present in list
    if(tail==NULL){
        node* newnode=new node(d);
        tail= newnode;
        newnode->next= newnode;

    }
    else{
        // non empty list
        node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        // element found
        node* temp= new node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}
void print(node* &tail){
    node* temp=tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
    }
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    
    cout<<endl;
}
void deletenode(node* &tail,int value){
    // empty list
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }

    else{
        node* prev=tail;
        node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;

        // 1 node case
        if(curr==prev){
            tail=NULL;
        }

        // >=2 node hai
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    node* tail=NULL;

    // empty list insert
    insertnode(tail,5,3);
    print(tail);
     insertnode(tail,3,4);
    print(tail);
    //   insertnode(tail,4,5);
    // print(tail);
    // deletenode(tail,4);
    // print(tail);

}