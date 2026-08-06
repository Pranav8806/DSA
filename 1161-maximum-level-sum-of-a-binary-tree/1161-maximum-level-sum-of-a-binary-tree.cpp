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
    int maxLevelSum(TreeNode* root) {
        int mx=INT_MIN;
        int mxlevel=-1;
        if(root==NULL) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int n=q.size();
            int levelsum=0;
            for(int i=0;i<n;i++){
                TreeNode *curr=q.front();
                levelsum+=curr->val;
                q.pop();
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
            level++;
            if(levelsum>mx){
                mx=levelsum;
                mxlevel=level;
            }
            
        }
        return mxlevel;
    }
};