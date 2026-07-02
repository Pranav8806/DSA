#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node{
public:
    T val;
    Node<T>* next;

    Node(T v){
        val = v;
        next = NULL;
    }
};

template <typename T>
class Stack{
    Node<T>* top;

public:
    Stack(){
        top = NULL;
    }
    bool isempty(){
        return top==NULL;
    }

    void push(T val){
        Node<T>* newNode = new Node<T>(val);
        newNode->next = top;
        top = newNode;
    }

    void pop(){
        if(top == NULL){
            cout << "Stack Underflow\n";
            return;
        }

        Node<T>* del = top;
        top = top->next;
        delete del;
    }

    T showtop(){
        if(top == NULL){
            throw runtime_error("Stack is empty");
        }
        return top->val;
    }

    void show(){
        Node<T>* temp = top;

        while(temp != NULL){
            cout << temp->val << endl;
            temp = temp->next;
        }
        cout << endl;
    }

    ~Stack(){
        while(top != NULL){
            pop();
        }
    }
};

int main(){
    Stack<int> st;

    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    st.show();

    cout << st.showtop() << endl;
}