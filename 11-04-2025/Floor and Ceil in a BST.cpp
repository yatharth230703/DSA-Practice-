
class Solution{	
	public:
        TreeNode* floor(TreeNode*root,int key){
            if(root==NULL || root->data==key){
                return root;
            }
            if(root->data>key){
                return floor(root->left,key);
            }
            TreeNode* just_right= floor(root->right,key);
            return (just_right && just_right->data<=key) ? just_right : root;
        }
        TreeNode*ceil(TreeNode*root, int key){
            if(root==NULL || root->data==key){
                return root;
            }
            if(root->data<key){
                return ceil(root->right,key);
            }
            TreeNode*just_left = ceil(root->left,key);
            return (just_left && just_left->data >= key) ? just_left:root; 

        }
		vector<int> floorCeilOfBST(TreeNode* root,int key){
			vector<int>ans;

            if(root==NULL){
                ans.push_back(-1);
                ans.push_back(-1);
            }
            TreeNode*f=floor(root,key);
            TreeNode*c = ceil(root,key);
            (f) ? ans.push_back(f->data): ans.push_back(-1);
            (c) ? ans.push_back(c->data) : ans.push_back(-1);
            return ans;
		}
};