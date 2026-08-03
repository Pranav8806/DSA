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
void printTree(Node *root){
    if(root==NULL) return;
    printTree(root->left);
    cout<<root->data<<" ";
    printTree(root->right);
}
int main(){
    vector<int>arr={3,2,5,6,8,9,1,12};
    Node *root=NULL;
    root=buildBST(arr);
    printTree(root);

}