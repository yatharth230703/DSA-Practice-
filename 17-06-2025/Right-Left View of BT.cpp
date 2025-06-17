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
    vector<int> rightSideView(TreeNode* root) {
        //your code goes here
        //mene question hi glt smjh lia 
        // isko right se dekhenge , so what I need is rowise check
        //har row me jo element last me add hua hai me usko consider kru?
        map<int,int>mp;
        queue<pair<TreeNode*,int>>q;
        //isme q is {node,row}
        q.push({root,0});
        while(!q.empty()){
            auto p =q.front();
            q.pop();
            mp[p.second]=p.first->data;
            if(p.first->left!=NULL){
                q.push({p.first->left,p.second+1});
            }
            if(p.first->right!=NULL){
                q.push({p.first->right , p.second+1});
            }
        }
        vector<int>ans;
        for(auto it=mp.begin();it!=mp.end();it++){
            ans.push_back(it->second);
        }
        return ans;

    }
};