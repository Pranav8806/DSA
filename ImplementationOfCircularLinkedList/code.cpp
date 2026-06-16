#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class CircularList{
    public:
    Node* head;
    Node* tail;
    CircularList(){
        head=NULL;
        tail=NULL;
    }
    void insertAtHead(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
        tail->next=newNode;
    }

    void insertAtTail(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
        newNode->next=head;
    }

    void delHead(){
        if(head==NULL){
            cout<<"Empty List\n";
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        Node *del=head;
        head=head->next;
        tail->next=head;
        delete del;
    }

    void delTail(){
        if(head==NULL){
            cout<<"Empty List\n";
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        Node *temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        Node*del=tail;
        temp->next=head;
        delete tail;
    }

    void printLL(){
        if (head==NULL)
        {
            cout<<"Empty Linked List\n";
        }
        cout<<head->data<<" ->";
        Node *temp=head->next;
        while(temp!=head){
            cout<<temp->data<<" <-> ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
};
int main(){
    CircularList cll;
    cll.insertAtHead(10);
    cll.insertAtHead(20);
    cll.insertAtHead(30);
    cll.printLL();
    cll.insertAtTail(454);
    cll.insertAtTail(484);
    cll.insertAtTail(784);
    cll.printLL();
    cll.delHead();
    cll.printLL();
    cll.delTail();
    cll.printLL();
    return 0;
}