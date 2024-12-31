#include <iostream>
#include <queue>
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
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildbst(node *root, int data)
{
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = buildbst(root->right, data);
    }
    else
    {
        root->left = buildbst(root->left, data);
    }
    return root;
}
node *minval(node *root)
{
    node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
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
node *deleteFromBst(node *root, int val)
{
    if (root == NULL)
        return root;

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
            node *temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->left != NULL && root->right != NULL)
        {
            int minival = minval(root -> right) -> data;
            root -> data = minival;
            root -> right = deleteFromBst(root -> right, minival);

            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deleteFromBst(root->left, val);
        return root;
    }
    else
    {
        root->right = deleteFromBst(root->right, val);
        return root;
    }
}
void takeinput(node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = buildbst(root, data);
        cin >> data;
    }
}
void levelorder(node *root)
{
    queue<node *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
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
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
node *inordersuccessor(node *root, node *p)
{
    node *successor = NULL;

    while (root != NULL)
    {
        if (p->data >= root->data)
        {
            root = root->right;
        }
        else
        {
            successor = root;
            root = root->left;
        }
    }
    return successor;
}

node *inorderpredcessor(node *root, node *p)
{
    node *predecessor = NULL;

    while (root != NULL)
    {
        if (root->data >= p->data)
        {
            root = root->left;
        }
        else
        {
            predecessor = root;
            root = root->right;
        }
    }
    return predecessor;
}

node *findNode(node *root, int value)
{
    if (root == NULL || root->data == value)
        return root;
    if (value < root->data)
        return findNode(root->left, value);
    else
        return findNode(root->right, value);
}
    
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main()
{
    int data;
    node *root = NULL;
    cout << "Taking input from user " << endl;
    takeinput(root);

    cout << "Level order traversal " << endl;
    levelorder(root);

    cout << "Inorder traversal " << endl;
    inorder(root);
    cout << endl;

    cout << "Preorder traversal " << endl;
    preorder(root);
    cout << endl;

    cout << "Postorder traversal " << endl;
    postorder(root);
    cout << endl;

    root = deleteFromBst(root, 3);

    cout << "Level order traversal " << endl;
    levelorder(root);

    cout << "Inorder traversal " << endl;
    inorder(root);
    cout << endl;

    cout << "Preorder traversal " << endl;
    preorder(root);
    cout << endl;

    cout << "Postorder traversal " << endl;
    postorder(root);
    cout << endl;

    cout << "Min val " << minval(root)->data << endl;
    cout << "Min val " << maxval(root)->data << endl;

    int value;
    cout << "Enter the value of which you want pre and suc " << endl;
    cin >> value;
    node *desired_node = findNode(root, value);

    cout << "Inorder successcor " << inordersuccessor(root, desired_node)->data << endl;

    cout << "Inorder predecessor " << inorderpredcessor(root, desired_node)->data << endl;
}