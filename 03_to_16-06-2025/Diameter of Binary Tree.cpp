/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
public:
    int helper(TreeNode* root, int &max1) {
        if (root==NULL){
            return 0;
        }
        int lh = helper(root->left,max1);
        int rh=helper(root->right, max1);
        max1=max(max1,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int max1=0;
        int ans = helper(root,max1);
        return max1;
    }
};