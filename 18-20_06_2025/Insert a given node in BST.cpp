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
    void helper(TreeNode* &root, int val){
        if(root==NULL){
            return ;
        }
        if(root->data < val){
            if(root->right==NULL){
                TreeNode*temp= new TreeNode(val);
                root->right=temp;
                return;
            }
            else{
                helper(root->right,val);
            }
        }
        else if(root->data >val){
            if(root->left==NULL){
                TreeNode*temp = new TreeNode(val);
                root->left=temp;
                return;
            }
            else{
                helper(root->left,val);
            }
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        //your code goes here
        //what I need is to find out the ideal location to insert a given node 
        //to the left it will have all nodes of lower value to it , to the right it will have all nodes of higher value 
        //left subtree-->all values less than root || right subtree-->all vlaues bigger than node 
        //wrt given  node , find that node which has an empty left or right , and satisfies corresponding condition
        helper(root,val);
        return root;
    }
};