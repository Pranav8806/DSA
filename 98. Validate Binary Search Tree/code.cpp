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
    bool isBST(TreeNode* root,TreeNode *mn,TreeNode *mx){
        if(root==NULL) return true;
        if(mn!=NULL && root->val<=mn->val) return false;
        if(mx!=NULL && root->val>=mx->val) return false;
        return (isBST(root->left,mn,root)&&isBST(root->right,root,mx));
    }
    bool isValidBST(TreeNode* root) {
        return isBST(root,nullptr,nullptr);
    }
};