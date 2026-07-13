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
int idx=-1;
Node *builtTree(vector<int>preorder){
    idx++;
    if(preorder[idx]==-1) return nullptr;
    Node *root =new Node(preorder[idx]);
    root->left=builtTree(preorder);
    root->right=builtTree(preorder);
    return root;
}
int trasformsumtree(Node *root){
    if(root==NULL) return 0;
    int old=root->data;
    int leftsum=trasformsumtree(root->left);
    int rightsum=trasformsumtree(root->right);
    root->data=leftsum+rightsum;
    return old+leftsum+rightsum;
}
int main(){
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = builtTree(preorder);
    trasformsumtree(root);
    return 0; 
}   