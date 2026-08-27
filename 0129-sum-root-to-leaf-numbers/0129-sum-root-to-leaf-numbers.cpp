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
    int sumNumbers(TreeNode* root) {
        return sumPath(root,0);
    }
    int sumPath(TreeNode *root,int path){
        if(root==NULL) return 0;
        path=path*10+root->val;
        if(root->left==NULL && root->right==NULL) return path;
        int lpath=sumPath(root->left,path);
        int rpath=sumPath(root->right,path);
        return lpath+rpath;
    }
};