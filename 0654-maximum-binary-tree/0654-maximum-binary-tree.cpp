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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0) return nullptr;
        int mxindx=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[mxindx]){
                mxindx=i;
            }
        }
        TreeNode *root=new TreeNode(nums[mxindx]);
        vector<int>lft(nums.begin(),nums.begin()+mxindx);
        vector<int>right(nums.begin()+mxindx+1,nums.end());
        root->left=constructMaximumBinaryTree(lft);
        root->right=constructMaximumBinaryTree(right);
        return root;
    }
};