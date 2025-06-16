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
    bool helper(TreeNode *r1 , TreeNode* r2){
        if (r1==NULL && r2==NULL){
            return true;
        }
        else if (r1==NULL && r2!=NULL){
            return false;
        }
        else if(r1!=NULL && r2==NULL){
            return false;
        }
        if(r1->data!=r2->data){
            return false;
        } 
        bool left = helper(r1->right,r2->left);
        bool right = helper(r1->left , r2->right);

        return left*right;
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root->left, root->right);
    }
};