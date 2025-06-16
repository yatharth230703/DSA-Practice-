/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
public:
    int tallyD(TreeNode*root){
        if(root==NULL){
            return 0;

        }
        int l =tallyD(root->left);
        if(l==-1){
            return -1;
        }
        int r= tallyD(root->right);
        if(r==-1){
            return -1;
        }
        if (abs(l-r)>1) {   // for current node 
           return -1;
        }
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode *root){
    	return (tallyD(root)!=-1);
    }
};