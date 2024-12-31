#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

    node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

node *buildtree(node *root)
{
    int data;
    cout << "Enter the data " << endl;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "enter the data into left side of " << data << endl;
    root->left = buildtree(root->left);

    cout << "enter the data into right side of " << data << endl;
    root->right = buildtree(root->right);

    return root;
}
void levelordertraversal(node *root)
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
void reverseLevelOrderTraversal(node *root)
{
    queue<node *> q;
    stack<int> s;

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        s.push(temp->data);

        if (temp->right)
        {
            q.push(temp->right);
        }
        if (temp->left)
        {
            q.push(temp->left);
        }
    }

    // Print the reverse level order traversal
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
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
    node *root = NULL;

    root = buildtree(root);

    cout << "Level order traversal: " << endl;
    levelordertraversal(root);
    // cout << endl;

    cout << "Reverse Level Order Traversal: ";
    reverseLevelOrderTraversal(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;
    cout << "Postorder traversal: ";
    postorder(root);

    return 0;
}
