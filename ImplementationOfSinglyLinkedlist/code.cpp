#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;          //address of next value
    Node(int val){
        data=val;
        next =NULL;
    }
};
class Linkedlist{
    Node*head;
    Node*tail;
    public:
    Linkedlist(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void push_back(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop_front(){
        if(head==NULL) {
            cout<<"Cannot delete anything ! empty list"<<endl;
            return;
        }
        else{
            Node*temp=head;
            head=temp->next;
            temp->next=NULL;
            if(head==NULL) tail==NULL;
            delete temp;
        }
    }
    void pop_back(){
        if(head==NULL){
            cout<<"Empty list \n";
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        else{
            Node *temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            delete tail;
            tail=temp;
            temp->next=NULL;
        }
    }
    void insertatpos(int val,int pos){
        if(pos<0) {
            cout<<"Invalid Position \n";
            return ;
        }
        if(pos==0){
            push_front(val);
            return ;
        }
        Node *temp=head;
        for(int i=1;i<pos-1;i++){
            if(temp==nullptr) {
                cout<<"Invalid position"<<endl;
                return ;
            }
            temp=temp->next;
        }
        Node *newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void search(int key){
        int idx=0;
        Node *temp=head;
        while(temp != nullptr){
            if(temp->data==key) {
                cout<<"Element found at index "<<idx<<endl;
                return ;
            }
            temp=temp->next;
            idx++;
        }
        cout<<"Element not found\n";
    }
    void printLL(){
        Node*temp=head;
        while(temp != NULL){
            cout<<" | "<<temp->data<<" | "<<temp->next<<" | "<<" " <<"->"<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};
int main(){
    Linkedlist ll;
    ll.push_back(5);
    ll.push_back(4);
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(6);
    ll.push_front(9);
    ll.printLL();
    ll.pop_front();
    ll.pop_back();
    ll.printLL();
    ll.insertatpos(3,2);
    ll.printLL();
    ll.search(5);
}