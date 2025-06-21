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
        void helper(TreeNode*root , pair<int,int> p , bool &ans){
            if(root==NULL){
                return;
            }
            if(root->data>p.second || root->data <p.first){
                ans=false;
            }
            helper(root->left , {p.first,root->data-1} , ans);
            helper(root->right ,{root->data +1,p.second},ans);
        }
		bool isBST(TreeNode* root){
			//your code goes here
            //providing a range to every node , from which it is allowed to belong
            pair<int,int>p={INT_MIN,INT_MAX};
            //needd to pass this on to helper, change dynamically, dont really need to return it 
            bool ans =true;
            helper(root, p ,ans);
            return ans;
		}
};