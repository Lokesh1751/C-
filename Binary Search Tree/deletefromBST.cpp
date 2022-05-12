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
Node *minval(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node *maxval(Node *root)
{
    Node *temp1 = root;
    while (temp1->right != NULL)
    {
        temp1 = temp1->right;
    }
    return temp1;
}
Node *deletefromBST(Node *root, int val)
{
    // base case
    if (root == NULL)
    {
        return root;
    }
    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child

        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // right child
        if (root->right != NULL && root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 childrens

        if (root->left != NULL && root->right != NULL)
        {
            int minv = minval(root)->data;
            root->data = minv;
            root->right = deletefromBST(root->right, minv);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deletefromBST(root->left, val);
        return root;
    }
    else
    {
        root->right = deletefromBST(root->right, val);
        return root;
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
        root->right = insertIntoBST(root->right, d);
    }
    if (d < root->data)
    {
        // left part me insert krna hai
        root->left = insertIntoBST(root->left, d);
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
     levelOrdertraversal(root);
     cout<<endl;
    deletefromBST(root,9);
    levelOrdertraversal(root);
    // 10 8 7 27 5 9 4 3 2 1 -1
}