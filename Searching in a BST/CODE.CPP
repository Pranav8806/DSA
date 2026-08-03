#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *left ;
    Node *right;
    int data;
    Node (int val){
        left=NULL;
        right=NULL;
        data =val;
    }
};
Node *insert(Node *root,int val){
    if(root==NULL) return new Node(val);
    if(root->data>val){ 
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}
Node *buildBST(vector<int>arr){
    Node *root=NULL;
    for(auto num:arr){
        root=insert(root,num);
    }
    return root;
}
bool search(Node *root,int val){
    if(root==NULL) return false;
    if(root->data==val) return true;
    if(root->data>val){
        return search(root->left,val);
    }
    else {
        return search(root->right,val);
    }
}
int main(){
    vector<int>arr={3,2,5,6,8,9,1,12};
    Node *root=NULL;
    root=buildBST(arr);
    search(root,4);
    return 0; 
}  