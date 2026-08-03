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
void  kthlevel(Node *root,int k){
    if(root==NULL) {
        cout<<"NULL " ;
        return ;
    }
    if(k==1) {
        cout<< root->data<<" ";
        return;
    }
    kthlevel(root->left,k-1);
    kthlevel(root->right,k-1);
}
int main(){
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = builtTree(preorder);
    int k=3;
    kthlevel(root,k);
    return 0;
   
} 