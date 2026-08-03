#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Stack{
    int top;
    vector<T>vec;
    public:
    Stack(){
        top=-1;
    }
    void push(T val){
        vec.push_back(val);
        top++;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow";
            return;
        }
        vec.pop_back();
        top--;
    }
    T  showtop(){
        return vec[top];
    }
    void show(){
        int i=top;
        while(i>=0){
            cout<<vec[i]<<endl;
            i--;
        }
        cout<<endl;
    }
};
int main(){
    Stack<int>s;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.show();
    s.pop();
    s.show();
    cout<<s.showtop();
}