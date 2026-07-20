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
void morristraverse(Node *root){
    Node *curr=root;
    while(curr!=NULL){
        if(curr->left==NULL){
            cout<<curr->data<<" ";
            curr=curr->right;
        }
        else{
            Node *IP=curr->left;
            while(IP->right!=NULL && IP->right!=curr){
                IP=IP->right;
            }
            if(IP->right==NULL)  //connection not created
            {
                IP->right=curr;
                curr=curr->left;
            }
            else //connection already created
            {
                cout<<curr->data<< " ";
                IP->right=NULL;
                curr=curr->right;
            }
        }
    }
}
int main(){
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = builtTree(preorder);
    morristraverse(root);
    return 0; 
}   