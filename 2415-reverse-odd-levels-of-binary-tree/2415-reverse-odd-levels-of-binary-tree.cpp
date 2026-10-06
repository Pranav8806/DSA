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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==NULL) return root;
        queue<TreeNode*>q;
        q.push(root);
        vector<int>level;
        int lvl=0;
        while(!q.empty()){
            vector<int>temp;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode *curr=q.front();
                q.pop();
                if(lvl%2!=0){
                    curr->val=level[n-i-1];
                }
                if(curr->left!=NULL){
                    q.push(curr->left);
                    temp.push_back(curr->left->val);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                    temp.push_back(curr->right->val);
                }
            }
            lvl++;
            level=temp;
        }  
        return root;  
    }
};