#include <bits/stdc++.h>
using namespace std;
class CircularQueue{
    int front;
    int rear;
    int cap,currsize;
    int *arr;
    public:
    CircularQueue(int s){
        cap=s;
        front=0;
        rear=-1;
        currsize=0;
        arr=new int[cap];
    }
    void enqueue(int val){
        if(currsize==cap){
            cout<<"Queue is Full \n";
            return;
        }
        rear=(rear+1)%cap;
        arr[rear]=val;
        currsize++;
    }
    void dequeue(){
        if(isempty()){
            cout<<"Queue is empty\n";
            return;
        }
        front =(front+1)%cap;
        currsize--;
    }
    bool isempty(){
        return currsize==0;
    }
    int peek(){
        if(isempty()){
            cout<<"Queue is empty \n";
            return -1    ;
        }
        return arr[front];
    }
    void display(){
        if(isempty()){
            cout<<"Queue is Empty !"<<endl;
            return ;
        }
        for(int i=front ;;i=(i+1)%cap){
            cout<<arr[i]<<" ";
            if(i==rear) break;
        }
        cout<<endl;
    }
};
int main(){
    CircularQueue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<endl;
    q.display(); 
    q.dequeue();
    q.dequeue();
    q.display(); 
    q.enqueue(40);
    q.enqueue(50);
    q.display(); 
    cout<<"Front element = "<<q.peek();
}