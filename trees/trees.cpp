#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node* right;
    node* left;

    node(int n){
        this->data = n;
        this->right = NULL;
        this->left = NULL;
    }
};

node* createTree(node* root)
{

    int data;
    cin>>data;

    root = new node(data);
    if(data ==-1){
        return NULL;
    }
    cout<<"enter the number left to "<<data<<":";
    root->right = createTree(root->right);
    cout<<"Enter the number right to data "<<data<<":";
    root->left = createTree(root->left);
    return root;


}
node* buildTreeLevel(node* root)
{
    int data;
    cin>>data;
    root = new node(data);
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        int left;
        cin>>left;
        if(left!=-1)
        {
            temp->left = new node(left);
            q.push(temp->left);
        }

        int right;
        cin>>right;
        if(right!=-1)
        {
            temp->right = new node(left);
            q.push(temp->right);
        }
    }
    return root;
}
void inorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data;
    inorder(root->left);
    inorder(root->right);
}

int main()
{
    node* root = NULL;
    root = buildTreeLevel(root);
    inorder(root);

}