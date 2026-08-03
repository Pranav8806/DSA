/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *prev=NULL;
    TreeNode *first=NULL;
    TreeNode *second=NULL;
    //while traversing in inorder sequence smaller value comes first
    void traverse(TreeNode* root){
        if(root==NULL) return ;
        traverse(root->left);
        //if two pairs of wronly placed vale exist then swap frst and lst 
        if(prev!=NULL && prev->val>root->val){
            if(first==NULL){
                first=prev;
            }
            second=root;
        }
        prev=root;
        traverse(root->right);
    }
    void recoverTree(TreeNode* root) {
        traverse(root);
        if(first && second){
            int temp=second->val;
            second->val=first->val;
            first->val=temp;
        }
    }
};