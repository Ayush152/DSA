#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
node *buildTree()
{
    int d;
    cin >> d;
    node *root;
    if (d == -1)
    {
        root = NULL;
    }
    else
    {
        root = new node(d);
        root->left = buildTree();
        root->right = buildTree();
    }
    return root;
}
void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    inOrder(root->left);
    inOrder(root->right);
}
void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    inOrder(root->right);
    cout << root->data << " ";
}
 
int main()
{
    node *root = NULL;
    cout << "Enter the operation u wants to perform : \n";
    cout << "1. Build \t\t 2.Inorder\n";
    cout << "3. Preorder \t\t 4.Postorder\n";
    cout << "5. Exit\n";
    cout << "Enter the task num u want to perform : ";
    int t;
    cin >> t;
    while (t != 5)
    {
        switch (t)
        {
        case 1:
            cout << "\nEnter the data in PreOrder and Enter -1 for NULL value :";
            root = buildTree();
            cout<<"Success!!"; 
            break;
        case 2:
            cout << "\nInOrder :";
            if(root==NULL) cout<<" Empty!";
            inOrder(root);
            break;
        case 3:
            cout << "\nPreOrder :";
            if(root==NULL) cout<<" Empty!";
            preOrder(root);
            break;
        case 4:
            cout << "\nPostOrder :";
            if(root==NULL) cout<<" Empty!"; 
            postOrder(root);
            break;
        default:
            cout << "\nEnter valid number!!\n";
            break;
        }

        cout << "\nEnter the task num u want to perform : ";
        cin >> t;
    }
    return 0;
}