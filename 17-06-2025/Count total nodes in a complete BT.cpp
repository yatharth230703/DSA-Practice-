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
    void helper(TreeNode*root ,int &max_count){
        if(root==NULL){
            return ;
        }
        helper(root->left,max_count);
        helper(root->right,max_count);
        max_count+=1;
    }
    int countNodes(TreeNode* root) { 
        int max_count=0;
        helper(root,max_count);
        return max_count;
    }
};