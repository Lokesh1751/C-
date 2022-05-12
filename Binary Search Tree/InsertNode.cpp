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
bool searchInBST(Node* root, int x) {
	if(root==NULL){
		return false;
	}
	if(root->data==x){
		return true;
	}
	if(root->data>x){
		// chotta toh left me milega bhai yr
		return searchInBST(root->left,  x);
	}
	if(root->data<x){
		return searchInBST(root->right,  x);
	}

}
void inorder(Node *root)
{
    // base case
    // LNR
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node *root)
{
    // base case
    // NLR
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{
    // base case
    // LRN
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void levelOrdertraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
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
    cout<<"Printing the BST:"<<endl;
    levelOrdertraversal(root);
    cout<<"Printing Inorder:"<<" ";
    inorder(root);
    cout<<endl;
      cout<<"Printing Preorder;"<<" ";
    preorder(root);
     cout<<endl;
      cout<<"Printing Postorder:"<<" ";
    postorder(root);
     cout<<endl;
     
     cout<<"Search result is:"<<" "<<searchInBST(root,5)<<endl;;
}