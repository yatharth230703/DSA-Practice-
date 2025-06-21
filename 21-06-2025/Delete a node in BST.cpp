class Solution {
public:
    // Helper function to connect subtrees after deleting a node
    TreeNode* connector(TreeNode* root) {
        // Case 1: If the node has no left child,
        // return the right subtree to bypass the node.
        if (!root->left)
            return root->right;
        
        // Case 2: If the node has no right child,
        // return the left subtree to bypass the node.
        else if (!root->right)
            return root->left;

        /* 
        Case 3: If the node has both left and right children:
        1. Save the left subtree in a temporary variable.
        2. Find the leftmost node in the right subtree.
        3. Attach the left subtree to the leftmost node in the right subtree. */
        TreeNode* leftchild = root->left;
        TreeNode* leftmost_child_in_right_subtree = root->right;

        // Traverse to the leftmost node in the right subtree.
        while (leftmost_child_in_right_subtree->left) {
            leftmost_child_in_right_subtree =
                leftmost_child_in_right_subtree->left;
        }

        // Attach the left subtree to the leftmost node in the right subtree.
        leftmost_child_in_right_subtree->left = leftchild;

        // Return the right subtree as the new root of the modified tree.
        return root->right;
    }

    // Function to delete a node with a specific key from the binary search tree
    TreeNode* deleteNode(TreeNode* root, int key) {
        // Base case: if the tree is empty, return NULL.
        if (root == NULL)
            return NULL;

        // If the node to be deleted is the root node,
        // use the connector function to replace the root.
        if (root->data == key) {
            return connector(root);
        }

        // Traverse the tree to find the node to be deleted.
        TreeNode* node = root;
        while (node) {
            // If the key to be deleted is smaller than the current node's data,
            // move to the left subtree.
            if (node->data > key) {
                // If the left child is the node to be deleted,
                // update the left child with the connector function.
                if (node->left && node->left->data == key) {
                    node->left = connector(node->left);
                    break;
                } else {
                    node = node->left; 
                }
            }
            // If the key to be deleted is larger than the current node's data,
            // move to the right subtree.
            else {
                // If the right child is the node to be deleted,
                // update the right child with the connector function.
                if (node->right && node->right->data == key) {
                    node->right = connector(node->right);
                    break;
                } else {
                    node = node->right; 
                }
            }
        }

        // Return the modified tree with the node deleted.
        return root;
    }
};