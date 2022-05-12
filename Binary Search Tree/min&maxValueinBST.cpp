#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* minval(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
Node* maxval(Node* root){
    Node* temp1=root;
    while(temp1->right!=NULL){
        temp1=temp1->right;
    }
    return temp1;
}
Node *insertIntoBST(Node *&root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {
        // right part me insert krna h
        root->right= insertIntoBST(root->right, d);
    }
    if (d < root->data)
    {
        // left part me insert krna hai
       root->left= insertIntoBST(root->left, d);
    }
    return root;

}
void takeInput(Node* &root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}
int main()
{
    Node *root = NULL;
    cout << "Enter data to create BST:" << endl;
    takeInput(root);
    cout<<"Minimum value in BST is:"<<" "<<minval(root)->data<<endl;
    //10 8 7 27 5 9 4 3 2 1 -1
     cout<<"Maximum value in BST is:"<<" "<<maxval(root)->data<<endl;
    
}