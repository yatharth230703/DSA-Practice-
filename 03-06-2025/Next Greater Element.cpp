class Solution {
public:
    vector<int> nextLargerElement(vector<int> arr) {
       vector<int>res (arr.size());
       stack<int>st;
       for(int i=arr.size()-1; i>=0;i--){
        while(!st.empty() && st.top()<=arr[i]){
            //jabtakh khali na ho jaye ya top current se bada na ho jaye kaatte raho
            st.pop();

        }
        if(st.empty()){
            res[i]=-1;
        }
        else{
            res[i]=st.top();
        }
        st.push(arr[i]);
       }
       return res;
    }
};
