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
    unordered_map<int,int>mp;
    TreeNode* consTree(vector<int>& postorder, vector<int>& inorder,int &postodIndx,int lbound,int rbound) {
        if(lbound>rbound) return NULL;
        TreeNode* root= new TreeNode(postorder[postodIndx]);
        postodIndx--;
        int inorderindx=mp[root->val];
        root->right=consTree( postorder,inorder,postodIndx,inorderindx+1,rbound);
        root->left=consTree( postorder,inorder,postodIndx,lbound,inorderindx-1);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postodIndx=postorder.size()-1;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return consTree(postorder,inorder, postodIndx,0,inorder.size()-1);
    }
};