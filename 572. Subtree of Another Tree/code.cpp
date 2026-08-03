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
    bool isidentical(TreeNode* root, TreeNode* subRoot){
        if(root==NULL && subRoot==NULL) return true;
        if(root==NULL ||subRoot==NULL) return false;
        if(root->val!=subRoot->val) return false;
        bool lval=isidentical(root->left,subRoot->left);
        bool rval=isidentical(root->right,subRoot->right);
        return(lval && rval);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr || subRoot==NULL) return false;
        if(root==NULL && subRoot ==NULL) return true;
        if(root->val==subRoot->val && isidentical(root,subRoot)){
            return true;
        }
        return(isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot));  
    }
};