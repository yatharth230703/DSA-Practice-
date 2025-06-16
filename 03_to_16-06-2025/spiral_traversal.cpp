/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
        //your code goes here
        vector<vector<int>>ans;
        int swit =0;
        vector<TreeNode*>tally;
        tally.push_back(root);
        while(tally.size()!=0){
            vector<int>el ;
            for(int i=0;i<tally.size();i++){
                el.push_back(tally[i]->data);
            }
        
                //abhi left to right add hoga
                //pehle right child -- fir left
            int t_size=tally.size();
            while(t_size!=0){
                if(tally[0]->right){
                    tally.push_back(tally[0]->right);
                }
                if(tally[0]->left){
                    tally.push_back(tally[0]->left);
                }
                tally.erase(tally.begin());
                t_size--;
            }
            if(swit%2==0){
                reverse(el.begin(),el.end());
            }
            swit++;
            ans.push_back(el);
        }
        return ans;
    }
};