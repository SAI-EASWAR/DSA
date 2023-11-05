#include<iostream>
using namespace std;


class node
{
    public:
    int data;
    node* right;
    node* left;
    node(int d)
    {
        this->left=this->right=NULL;
        this->data = d;
    }
};

int heightOfTree(node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int left = heightOfTree(root->left);
    int right = heightOfTree(root->right);
    return 1+max(left,right);
}

node* createTree(node* root)
{
    int num;
    cin>>num;
    if(num==-1){
        return NULL;
    }
    cout<<"enter the number left to "<<num<<":";
    root->right = createTree(root->right);
    cout<<"Enter the number right to data "<<num<<":";
    root->left = createTree(root->left);
    return root;
}
node* bst(node* root,int num){
    if(root==NULL)
    {
        node* temp = new node(num);
        return temp;
    }
    if(num<root->data)
    {
        root->left = bst(root->left,num);
    }
    else
    {
        root->right = bst(root->right,num);
    }
    return root;
}
void dx(node* &root)
{
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    dx(root->left);
    dx(root->right);
}
int main()
{
    node* root = NULL;
    int d =5;
    for(int i=0;i<d;i++){
        int n;
        cin>>n;
        root= bst(root,n);
    }
    dx(root);
    cout<<heightOfTree(root);
}