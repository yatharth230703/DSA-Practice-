class Solution{
	public:
	    void helper(TreeNode*root,vector<int>&ans){
			if(root==NULL){
				return;
			}
			helper(root->left,ans);
			helper(root->right,ans);
			ans.push_back(root->data);
		}
		vector<int> postorder(TreeNode* root){
	        vector<int>ans;
			helper(root,ans);
			return ans;
		}
};