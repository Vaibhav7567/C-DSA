#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node *right;
    node *left;

    node(int data)
    {
        this -> data = data;
        this -> right = NULL;
        this -> left = NULL;

    }
};
node *buildtree(node *root)
{
    int data;
    cout << "Enter the data "<<endl;
    cin >> data;
    root = new node(data);

    if(data == -1 )
    {
        return NULL;
    }
    cout << "enter the data into left side of "<< data << endl;
    root -> left = buildtree(root -> left);
    
    cout << "enter the data into right side of "<< data << endl;
    root -> right = buildtree(root -> right);

    return root;
}
void levelordertraversal(node *root)
{
    queue<node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp -> data << " ";
            if(temp -> left)
            {
                q.push(temp -> left);
            }
             if(temp -> right)
            {
                q.push(temp -> right);
            }
        }
    }
}
int main()
{
    node *root = NULL;

    root = buildtree(root); 

    levelordertraversal(root);
}