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

int main()
{
    node* root = NULL;
    root = createTree(root);
    cout<<heightOfTree(root);
}