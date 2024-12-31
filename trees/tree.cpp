#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;
    
    node(int data)
    {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};  
node *buildtree(node *root)
{
    
    int data;
    cout << "Enter the data " << endl;
    cin >> data;
    root = new node(data);

    if(data == -1 )
    {
        return NULL;
    }

    cout << "Enter in the left side of "<< data << endl;
    root -> left = buildtree(root -> left);

    cout << "Enter in the right side of "<< data << endl;
    root -> right = buildtree(root -> right);

    return root;
}
int main()
{
    node *root = NULL;

    root = buildtree(root);
}