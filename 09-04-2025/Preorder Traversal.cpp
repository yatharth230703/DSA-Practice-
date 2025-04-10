class Solution{
	public:
	    void helper(TreeNode*root, vector<int> &ans){
			if (root==NULL){
				return;
			}
			ans.push_back(root->data);
			helper(root->left,ans);
			helper(root->right,ans);
		}
		vector<int> preorder(TreeNode* root){
	       vector<int>ans;
		   helper(root,ans);
		   return ans;
		}
};