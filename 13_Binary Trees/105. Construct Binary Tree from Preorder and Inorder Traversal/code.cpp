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
    
    TreeNode* consTree(vector<int>& preorder, vector<int>& inorder,int &preodIndx,int lbound,int rbound) {
        if(lbound>rbound) return NULL;
        TreeNode* root= new TreeNode(preorder[preodIndx]);
        preodIndx++;
        int inorderindx=mp[root->val];
        root->left=consTree( preorder,inorder,preodIndx,lbound,inorderindx-1);
        root->right=consTree( preorder,inorder,preodIndx,inorderindx+1,rbound);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preodIndx=0;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return consTree( preorder,inorder,preodIndx,0,inorder.size()-1);  
    }
};