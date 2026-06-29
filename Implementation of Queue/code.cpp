#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int value){
        val =value;
        next=nullptr;
    }
};
class Queue{
    public:
    Node *head;
    Node *tail;
    Queue(){
        head=tail=NULL;
    }
    void enqueue(int val){
        Node *newNode=new Node(val);
        if(head ==nullptr){
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }
    void dequeue(){
        if(head==NULL){
            cout<<"Empty Queue"<<endl;
            return;
        }
        Node*del=head;
        head=head->next;
        delete del;
        if(head==NULL){
            tail=nullptr;
        }
    }
    int peek(){
        if(head==nullptr) {
            cout<<"Queue is empty "<<endl;
            return -1;
        }
        return head->val;
    }
    bool isempty(){
        return head==nullptr ||tail==nullptr;
    }
    void display(){
        Node*temp=head;
        while(temp != NULL){
            cout<<temp->val<<" "<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout<<endl;
    q.display(); 
    q.dequeue();
    q.dequeue();
    q.display(); 
    cout<<"Front element = "<<q.peek();
}