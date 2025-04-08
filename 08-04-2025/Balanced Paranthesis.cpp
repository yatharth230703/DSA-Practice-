class Solution {
    public:
        bool isValid(string str) {
           int i=0;
           stack<int>st;
    
        while (i < str.size()) {
            if (!st.empty() && st.top() == '(' && str[i] == ')') {
                st.pop();
            } else if (!st.empty() && st.top() == '[' && str[i] == ']') {
                st.pop();
            } else if (!st.empty() && st.top() == '{' && str[i] == '}') {
                st.pop();
            } else {
                st.push(str[i]);
            }
            i++;
        }
           return st.empty();
        }
    };