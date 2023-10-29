#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

};
void atHead(Node* &head,int num)
{
    Node* temp = new Node(num);
    temp->next = head;
    head = temp;

}


void atTail(Node* &head,int num)
{

    Node* node = new Node(num);
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = node;

}

void atPosition(Node* &head,int num,int pos)
{
    if(pos==0){
        atHead(head,num);
    }
    else
    {
    Node* node = new Node(num);
    Node* temp = head;
    for(int i =0;i<pos-1;i++){
        temp= temp->next;
    }
    Node* store = temp->next;
    temp->next = node;
    node->next = store;
    }
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = new Node(5);
    atHead(head,7);
    atTail(head,9);
    print(head);
    atPosition(head,3,1);
    print(head);
    atPosition(head,6,2);
    print(head);
    atPosition(head,7,0);
    print(head);

}