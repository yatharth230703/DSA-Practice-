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
    void helper(TreeNode* &root , queue<TreeNode*>nextlvls){
        if(root==NULL){
            return;
        }
        //create left n right queues
        queue<TreeNode*>left ;
        queue<TreeNode*>right;
        while( !nextlvls.empty() && nextlvls.front()->data<root->data ){
            left.push(nextlvls.front());
            nextlvls.pop();
        }
        right=nextlvls;
        if(!left.empty()){
            root->left=left.front();
            left.pop();
        }
        if(!right.empty()){
            root->right=right.front();
            right.pop();
        }
        helper(root->left,left);
        helper(root->right,right);
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        //your code goes here
        TreeNode*root = new TreeNode(preorder[0]);
        queue<TreeNode*>nextlvls;
        for(int i=1; i<preorder.size();i++){
            TreeNode* temp = new TreeNode(preorder[i]);
            nextlvls.push(temp);
        }
        helper(root,nextlvls);
        return root;
    }
};