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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return nullptr;
        else if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else if(root->val<key){
            root->right=deleteNode(root->right,key);
        }
        else{//root->val==key
            //1 child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            //2children
            else  if(root->left!=NULL && root->right!=NULL){
                //find inorder succesor :smallest element in right subtree
                TreeNode* IS=root->right;
                while(IS->left!=NULL){
                    IS=IS->left;
                }
                    root->val=IS->val;
                    root->right=deleteNode(root->right,IS->val);
            }
            //1child
            else if(root->left){
                TreeNode *temp=root->left;
                delete root;
                return temp;
            }
            else {
                TreeNode *temp1=root->right;
                delete root;
                return temp1;
            }
        }
        return root;
    }
};