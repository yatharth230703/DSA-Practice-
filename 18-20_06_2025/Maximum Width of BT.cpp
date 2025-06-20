
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        //level order traversal karle 
        //har vector k bhi vectoor me data ki jaga column store hoga
        // vector ka vector row ko represent karega , the whole thing represents the tree
        queue <pair<pair<TreeNode* ,int>,int>> q ;
        //node, row , column
        map<int, vector<int>>mp;
        //represents row , vector of cols 
        /// map represets graph poora ,merko har row ka highest aur lowest col value se matlab hai,I then need int, pair
        q.push({{root,0},0}); //0th row 0th col 
 ///////////instead of column save the index , if i=0 , left index is 2i+1 , right is 2i+2
        //starting wale k 0 hi h 
        while(!q.empty()){

            auto p = q.front();
            q.pop();
            //now p is node , row , col // next line add checks
            //p.first.second is row , p.second is col 
            mp[p.first.second].push_back(p.second);
            //ab aage badho 
            if(p.first.first->left!=NULL){
                q.push({{p.first.first->left,p.first.second+1},2*p.second+1});
            }
            if(p.first.first->right!=NULL){
                q.push({{p.first.first->right,p.first.second+1},2*p.second+2});
            }
        }
        //now map has all the pre-requisites ,har index jo ki sorted hi hai uske vector pe I have max and min cols,
        //I just need max+ve + max-ve 
        int ans =0;
        for(auto it =mp.begin();it!=mp.end();it++){
            //it is a vector 
            int min_yet = INT_MAX;
            int max_yet = INT_MIN;
            for(int i=0;i<it->second.size();i++){
                //cout << "<row:"<<it->first << " "<<it->second[i] <<">";
                if(min_yet>it->second[i]){
                    min_yet=it->second[i];
                    //cout<<"<mini|"<<min_yet<<"|mini>";
                }
                if(max_yet<it->second[i]){
                    max_yet=it->second[i];
                    //cout<<"<maxi|"<<max_yet<<"|maxi>";
                }
            }
            if(ans<max_yet-min_yet){
                ans=max_yet-min_yet;
            }
        }
        //hypothesis correct, proceed to action now 
        ///formula for every row : 2**r - (r-abs(min_yet) + (r-max_yet)
        return ans+1;

    }
};