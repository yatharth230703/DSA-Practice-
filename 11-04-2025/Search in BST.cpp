class Solution {
    public:
        TreeNode* searchBST(TreeNode* root, int val) {
            if (root == NULL ) {
                return root;
            }
            if (root->data == val){
                return root;
            }
    
            if (val < root->data) {
                 searchBST(root->left, val);
            } else {
                 searchBST(root->right, val);
            }
        }
    };