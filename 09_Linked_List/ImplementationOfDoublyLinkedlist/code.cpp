#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};
class DoublyList{
    public:
    Node* head;
    DoublyList(){
        head=NULL;
    }
    void push_front(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }

    void push_back(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node *temp=head;
        while (temp->next!=nullptr){
            temp=temp->next;
        }
        newNode->prev=temp;
        temp->next=newNode;
        
    }

    void printLL(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" <-> ";
            temp=temp->next;
        }
        cout<<" NULL";
    }
    void pop_front(){
        if(head==NULL){
            cout<<"Empty List\n";
            return;
        }
        Node  *temp=head;
        head=head->next;
        if(head!=NULL){     //FOR SINGLE NODE
            head->prev=NULL;
        }
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){
        if(head==NULL){
            cout<<"Empty List\n";
            return;
        }
        if(head->next == NULL){
            delete head;
            head = NULL;
            return;
        }
        Node *temp=head;
        while (temp->next->next!=nullptr){
            temp=temp->next;
        }
        Node *del=temp->next;
        temp->next=NULL;
        delete del;
    }

    void insertatpos(int pos,int val){
        Node *newNode=new Node(val);
        if(pos<1){
            cout<<"Empty List\n";
            return;
        }
        if(pos==1){
            push_front(val);
            return;
        }
        Node *temp=head;
        for(int i=1;i<pos-1;i++){
            if(temp==nullptr) {
                cout<<"Invalid Position";
                return;
            }
            temp=temp->next;
        }
        newNode->prev=temp;
        newNode->next=temp->next;
        if(temp->next != NULL){                       //null value cannot have previous pointer
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
};
int main(){
    DoublyList ll;
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    ll.push_front(40);
    ll.printLL();
    return 0;
}