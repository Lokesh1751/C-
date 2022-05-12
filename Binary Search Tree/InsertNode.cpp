#include <iostream>
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
void takeInput(Node *&root)
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
}