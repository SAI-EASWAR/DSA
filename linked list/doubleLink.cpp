#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data = d;
        this->next= NULL;
        this->prev = NULL;
    }
};
int main(){
    int * a = 8;
    cout<<(*a)<<endl;

}