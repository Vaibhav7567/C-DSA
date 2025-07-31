#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};
node *buildBst(node *root, int val)
{
    if (root == NULL)
    {
        root = new node(val);
        return root;
    }
    if (root->data > val)
        root -> left = buildBst(root->left, val);

    else
        root -> right = buildBst(root->right, val);

    return root;
}
node *findnode(node *root, int val)
{
    if(root == NULL || root -> data == val)
        return root;

    if(root -> data > val)
    {
        return findnode(root -> left, val);
    }
    else
    {
        return findnode(root -> right, val);
    }
}
node *maxval(node *root)
{
    node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}
node *deletenode(node *root, int val)
{
    if(root == NULL)
        return NULL;

    if(root -> data == val)
    {
        if(root -> left == NULL && root -> right == NULL)
        {
            delete root;
            return NULL;
        }
        if(root -> left != NULL && root -> right == NULL)
        {
            node *temp = root -> left;
            delete root;
            return temp;
        }
        if(root -> left == NULL && root -> right != NULL)
        {
            node *temp = root -> right;
            delete root;
            return temp;
        }
        if(root -> left != NULL && root -> right != NULL)
        {
            int max = maxval(root -> left) -> data;
            root -> data = max;
            root -> left = deletenode(root -> left, max);


            return root;
        }
    }
    else if(root -> data > val)
    {
        root -> left =  deletenode(root -> left, val);
        return root;
    }
    else
    {
        root -> right = deletenode(root -> right, val);
        return root;
    }
}

void takeinput(node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = buildBst(root, data);
        cin >> data;
    }
}
void inorderTraversal(node *&root)
{
    if(root == NULL)
        return;
    
    inorderTraversal(root -> left);
    cout << root -> data << " ";
    inorderTraversal(root -> right);
}
int main()
{
    node *root = NULL;
    cout << "Enter the data " << endl;
    takeinput(root);

    cout << "Inorder traversal " << endl;
    inorderTraversal(root);
    cout << endl;

    int val;
    cout << "Enter the element you want to delete " << endl;
    cin >> val;
    deletenode(root, val);

    cout << "Inorder traversal " << endl;
    inorderTraversal(root);

    
    return 0;
}
