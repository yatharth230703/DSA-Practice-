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
    vector <int> bottomView(TreeNode *root){
    	// I am assuming jo last me aaya wo hi choose krlo 
        // edge case apne aap clear ho jaega 
        map<int,int>mp;
        //this is col ,data
        queue<pair<TreeNode*,int>>q;
        // this is root,col
        q.push({root,0});
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            mp[p.second]=p.first->data;
            //condition lagane ki need nahi
            if(p.first->left!=NULL){
                q.push({p.first->left,p.second-1});
            }
            if(p.first->right!=NULL){
                q.push({p.first->right,p.second+1});
            }

        }
        vector<int>ans;
        for (auto it =mp.begin();it!=mp.end();it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};