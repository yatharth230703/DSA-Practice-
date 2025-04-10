class Solution{
	public:
		void helper(TreeNode*root,vector<int>&inorder,vector<int>&preorder, vector<int>&postorder){
			if(root==NULL){
				return;
			}
			preorder.push_back(root->data);
			helper(root->left,inorder,preorder,postorder);
			inorder.push_back(root->data);
			helper(root->right,inorder,preorder,postorder);
			postorder.push_back(root->data);
		}
		vector<vector<int> > treeTraversal(TreeNode* root){
			vector<vector<int>>ans;
			vector<int>inorder;
			vector<int>preorder;
			vector<int>postorder;
			helper(root,inorder,preorder,postorder);
			ans.push_back(inorder);
			ans.push_back(preorder);
			ans.push_back(postorder);
			return ans;
		}
};