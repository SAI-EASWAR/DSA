#include<iostream>
#include<queue>
using namespace std;
class node{

    public:
    int data;
    node* right;
    node* left;

    node(int num)
    {
        this->data=num;
        this->left=this->right=NULL;
    }

};
// node* usingR(node* root)
// {
// }
node* uq(node* root)
{
    int n;
    queue<node*> q;
    cout<<"the data for the root node ";
    cin>>n;
    root = new node(n);
    q.push(root);

    while(!q.empty())
    {
        node* temp= q.front();
        q.pop();
        int right;
        int left;
        cout<<"the left one? of "<<temp->data<<" ";
        cin>>left;
        if(left!=-1)
        {
            temp->left = new node(left);
            q.push(temp->left);
        }
        cout<<"the right one? of "<<temp->data<<" ";
        cin>>right;
        if(right!=-1)
        {
            temp->right= new node(right);
            q.push(temp->right);
        }
    }
    return root;
}
void printTree(node* root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left != NULL){
        q.push(temp->left);}
        if(temp->right != NULL){
        q.push(temp->right);}

        
    }

}
int main()
{
    node* r = NULL;
    r = uq(r);
    printTree(r);

}