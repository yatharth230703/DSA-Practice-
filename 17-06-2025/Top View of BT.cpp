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
    vector<int> topView(TreeNode *root){
        //your code goes here
        map<int,int>mp;
        //map represents col, node->data
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            if(mp.find(p.second)==mp.end()){
                //matlab nahi mil gya
                mp[p.second]=p.first->data;
            }
            //add children
            if(p.first->left!=NULL){
                q.push({p.first->left , p.second-1});
            }
            if(p.first->right!=NULL){
                q.push({p.first->right , p.second+1});
            }
        }
        vector<int>ans;
        for(auto it= mp.begin();it!=mp.end();it++){
            ans.push_back(it->second);
        }
        return ans;

    }
};