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
        void helper(TreeNode*root , vector<int>&inorder){
            if(root==NULL){
                return;
            }
            
            helper(root->left,inorder);
            inorder.push_back(root->data);
            helper(root->right,inorder);
        }
		vector<int> succPredBST(TreeNode* root,int key){
            vector<int>inorder;
            helper(root,inorder);
            int i=0;
            while(i<inorder.size()){
                if(inorder[i]==key){
                    break;
                }
                i++;
            }
            vector<int>ans;
            if(i==0){
                ans.push_back(-1);
                ans.push_back(inorder[1]);
            }
            else if (i==inorder.size()-1){
                ans.push_back(inorder[i-1]);
                ans.push_back(-1);
            }
            else{
                ans.push_back(inorder[i-1]);
                ans.push_back(inorder[i+1]);
            }
            return ans;
		}
};