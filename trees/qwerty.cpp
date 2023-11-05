#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree(Node* root)
{
    cout<<"give the root data : ";
    int r;
    cin>>r;
    root = new Node(r);
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* temp;
        temp = q.front();
        q.pop();

        cout<<"give the input for the data (left)"<<temp->data<<" ";
        int left;
        cin>>left;
        if(left!=-1)
        {
            temp->left = new Node(left);
            q.push(temp->left);
        }
        cout<<"give the input for the data (right)"<<temp->data<<" ";
        int right;
        cin>>right;
        if(right !=-1)
        {
            temp->right = new Node(right);
            q.push(temp->right);
        }
    }
    return root;
}
Node* findInorderSuccessor(Node* node) {
    Node* current = node;
    while (current && current->left) {
        current = current->left;
    }
    return current;
}






Node* deleteNOde(Node* root,int num)
{
    if(root==NULL)
    {
        return root;
    }
    if(num>root->data){
        root->right = deleteNOde(root->right,num);
    }
    else if(num<root->data){
        root->left = deleteNOde(root->left,num);
    }
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* successor = findInorderSuccessor(root->right);
        root->data = successor->data;
        root->right = deleteNOde(root->right,successor->data);
    }
    return root;

}
void print(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    print(root->left);
    print(root->right);
}
int main()
{
    Node* r = NULL;
    r = createTree(r);
}