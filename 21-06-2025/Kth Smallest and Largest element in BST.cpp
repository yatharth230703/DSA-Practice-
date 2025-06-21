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
    void helper(TreeNode*root,  vector<int>& tree){
        // use ksmol , klarge as tallys for k 
        if(root==NULL){
            return;
        }
        helper(root->left,tree);
        tree.push_back(root->data);
        helper(root->right,tree);

    }
	vector<int> kLargesSmall(TreeNode* root,int k){
		//your code goes here
        vector<int>tree;
        //no need to sort 
        helper(root,tree);
        vector<int>ans;
        ans.push_back(tree[k-1]);
        ans.push_back(tree[tree.size()-k]);
        return ans;

	}
};