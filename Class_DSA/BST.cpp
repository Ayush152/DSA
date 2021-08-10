#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define int long long
using namespace std;
const int N = 1e5+2, MOD = 1e9+7;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
       data = val;
       left = NULL;
       right = NULL;
    }
};
node* insert(node*&root, int val){
     if(root==NULL){
          return new node(val);
     }
     if(val<root->data){
         root->left = insert(root->left, val);
     }
     if(val>root->data){
         root->right = insert(root->right, val);
     }
     return root;
}
node* inordersucc(node*&root){
    if(root==NULL){
        return NULL;
    }
    node*curr = root;
    while(curr!=NULL && curr->left!=NULL){
            curr = curr->left;
    }
    return curr;
}
node* deleteinBST(node*&root, int val){
    if(root==NULL){
        return NULL;
    }
    if(val<root->data){
        root->left = deleteinBST(root->left, val);
    }
    else if(val>root->data){
        root->right = deleteinBST(root->right, val);
    }
    else{

        //case 1 and case 2 when to be deleted node has 0 and 1 childs
        if(root->left == NULL){
            node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node*temp = root->left;
            free(root);
            return temp;
        }
        //case 3 when to be deleted node has two child
        //in this case, node has to be replaced with its inorder successsor and then deleted
        node*temp = inordersucc(root->right);
        root->data = temp->data;
        root->right = deleteinBST(root->right, temp->data);
    }
    return root;
}
void inorder(node*&root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node*&root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*&root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

signed main()
{
 node* head = NULL;
 head = insert(head, 0);
  int n;
  cin>>n;
  int arr[n];
  rep(i,0,n){
      cin>>arr[i];
      insert(head,arr[i]);
  }
  inorder(head);
  cout<<endl;
  preorder(head);
  cout<<endl;
  postorder(head);
  cout<<endl;
  cout<<"Enter element to be deleted "<<endl;
  int key;
  cin>>key;
  node*root = NULL;
  root = deleteinBST(head, key);
  inorder(root);
  cout<<endl;



return 0;
}