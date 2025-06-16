class Solution {
public:
    vector<int> nextGreaterElements(vector<int> &arr) {
        // imagine the array to be double its size
        // be it double or not I still need to account for elements only till 0->n 
        vector<int>res(arr.size());
        int n=arr.size();
        stack<int>st;
        for(int i=2*n-1 ;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i%n]){
                //i%n isliye taaki agar i n se bada ho tho apne aap round ho jaye 
                st.pop();
            }
            if(i<n){
                if(st.empty()){
                    res[i]=-1;
                }
                else{
                    res[i] = st.top();
                }
            }
            st.push(arr[i%n]);
            //again , i%n isliye cause push merko dono case me karne , i>n and i<n , but array res me sirf i<n daalna cause else is hypothetical

        }
        return res;
    }
};