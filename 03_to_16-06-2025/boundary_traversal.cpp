class Solution {
    bool isLeaf(TreeNode* node) {
        return node->left == nullptr && node->right == nullptr;
    }
    
    void addLeftBoundary(TreeNode* root, vector<int>& ans) {
        TreeNode* cur = root->left;
        while (cur) {
            if (!isLeaf(cur))
                ans.push_back(cur->data);
            // prefer left child, else right
            cur = (cur->left) ? cur->left : cur->right;
        }
    }
    
    void addLeaves(TreeNode* root, vector<int>& ans) {
        if (!root) return;
        if (isLeaf(root)) {
            ans.push_back(root->data);
        } else {
            addLeaves(root->left, ans);
            addLeaves(root->right, ans);
        }
    }
    
    void addRightBoundary(TreeNode* root, vector<int>& ans) {
        TreeNode* cur = root->right;
        vector<int> tmp;
        while (cur) {
            if (!isLeaf(cur))
                tmp.push_back(cur->data);
            // prefer right child, else left
            cur = (cur->right) ? cur->right : cur->left;
        }
        // append in reverse order
        for (int i = (int)tmp.size() - 1; i >= 0; --i)
            ans.push_back(tmp[i]);
    }
    
public:
    vector<int> boundary(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;
        
        // 1) root
        if (!isLeaf(root))
            ans.push_back(root->data);
        
        // 2) left boundary (excluding leaves)
        addLeftBoundary(root, ans);
        
        // 3) all leaves
        addLeaves(root, ans);
        
        // 4) right boundary (excluding leaves), in reverse
        addRightBoundary(root, ans);
        
        return ans;
    }
};
