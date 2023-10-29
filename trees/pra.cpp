#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int num)
    {
        this->left = this->right = NULL;
        this->data = num;
    }

};
bool searchNode(node* a,int num){
        if(a == NULL){
        return false;
    }

    if(a->data == num){
        return true;
    }
    return searchNode(a->left,num) || searchNode(a->right,num);
}

void createTree(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
}

pair<int,int> diameter(node* root)
{
    if(root==NULL)
    {
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    pair<int,int> left = diameter(root->left);
    pair<int,int> right = diameter(root->right);

    int d1 =left.first;
    int d2 =right.first;
    int dr = left.second +right.second+1;


    int dia = max(d1,max(d2,dr));
    int h = max(left.second,right.second)+1;
    pair<int,int> x= make_pair(dia,h);
    return x;


}
void parent(node* root,int num){
    if(root == NULL){
        return;
    }
    
}
int main()
{
    node* root =NULL;
    createTree(root);
    cout<<endl;
    pair<int,int> x=diameter(root);
    cout<<x.first;
}