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
    bool search_subtree(TreeNode*root, int key){
            if(root==NULL){
                return false;
            }
            if(key==root->data){
                return true;
            }
           
            bool left =search_subtree(root->left,key);
            
            
            bool right = search_subtree(root->right,key);
            
            return left+right;
        }
    void helper(TreeNode* root , int p , int q ,TreeNode* &ans){
            if(root==NULL){
                return;
            }
            //root k subtree check kro
            bool ltree_p = search_subtree(root->left,p);
            bool ltree_q = search_subtree(root->left,q);
            bool rtree_p = search_subtree(root->right,p);
            bool rtree_q = search_subtree(root->right,q);
            //cout << "*******************************";
            //cout << "ltree_q  "  << ltree_q << " ltree_p " << ltree_p << " rtree_q" << rtree_q << " rtree_p "<<rtree_p;
            //cout << "*******************************";
            if(ltree_p && ltree_q){
                //move left
                helper(root->left ,p,q,ans);
            }
            else if(rtree_p && rtree_q){
                //move right 
                helper(root->right,p,q,ans);
            }
            else{
                // this either means one is true one is false among ltree and rtree_p
                if((ltree_p && rtree_q) || (rtree_p && ltree_q)){
                    //this means the root is LCA 
                    ans = root;
                    return;
                }
                else{
                    //this either means ki p ya q me se koi exist hi ni krta current node k left/ right subtree me , which is possible for smaller subtree , larger p,ltree_q
                    //or this means root is either p or q 
                    if(root->data==p || root->data==q){
                        ans=root;
                        return;
                    }

                }
            }

	        //your code goes here
            //lowest common ancestor is someone that has the both of these nodes in their left AND right subtree respectively, not in the same thing 
            //edgecases might include that the node 1 / node 2 itself is the common ancestor, that will happen if the requested element is in the right /left subtree of the given node 
            // I can check every node's left and right binary tree , if the requried nodes p and q lie :
            // in left ,left , move left 
            // in right , right , move right 
            // in right-left || left-right , we have ancestor 
            // case 3 me hi we can have a scenario where we notice one of the given nodes p and q might themself be the lowest common ancestor , that will happen if : 
            // i founf p/q but couldnt find q/p at given node 
            // this means given node is p/q 
            // return p/q 

		}
		TreeNode* lca(TreeNode* root, int p, int q){
	        //your code goes here
            TreeNode *ans = new TreeNode(-1);
            helper(root,p,q,ans);
            return ans;
		}
};