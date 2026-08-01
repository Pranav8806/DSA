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
void inorder(Node *root,vector<int>&arr){
    if(root==NULL) return ;
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
}
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
Node *mergebst(Node *root1,Node *root2){
    vector<int>arr1;
    vector<int>arr2;
    inorder(root1,arr1);
    inorder(root2,arr2);
    vector<int>temp;
    int i=0,n1=arr1.size();
    int j=0,n2=arr2.size();
    while(i<n1 &&j<n2){
        if(arr1[i]<arr2[j]){
            temp.push_back(arr1[i]);
            i++;
        }
        else{
            temp.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n1){
        temp.push_back(arr1[i]);
        i++;
    }
    while(j<n2){
        temp.push_back(arr2[j]);
        j++;
    }
    Node *root=NULL;
    root=buildBST(temp);
    return root;
}
void printTree(Node *root){
    if(root==NULL) return;
    printTree(root->left);
    cout<<root->data<<" ";
    printTree(root->right);
}
int main(){
    vector<int> arr1 = {8, 2, 1, 10};
    vector<int> arr2 = {5, 3, 0};
    Node *root1=NULL;
    Node *root2=NULL;
    root1=buildBST(arr1);
    root2=buildBST(arr2);
    Node *root=mergebst(root1,root2);
    printTree(root);
}