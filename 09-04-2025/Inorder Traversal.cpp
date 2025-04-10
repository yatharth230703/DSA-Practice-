class Solution{
	public:
	    void helper(TreeNode*root , vector<int>&ans){
			if (root==NULL){
				return;
			}
			helper(root->left,ans);
			ans.push_back(root->data);
			helper(root->right,ans);

		}
		vector<int> inorder(TreeNode* root){
			vector<int>ans;
			helper(root,ans);
			return ans;
		}
};