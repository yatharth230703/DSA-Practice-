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
    int helper(TreeNode* root , int &maxo){
        if(root==NULL){
            return 0;
        }
        int ls = max(0,helper(root->left,maxo));
        int rs = max(0,helper(root->right,maxo));
        maxo = max(maxo , root->data+ls+rs);
        return root->data+max(ls,rs);
    }
    int maxPathSum(TreeNode* root) {
        int maxo=INT_MIN;
        int ans = helper(root,maxo);
        return maxo;

    }
};	