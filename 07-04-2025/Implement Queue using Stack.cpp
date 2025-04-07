class StackQueue {
    private :
     stack<int>s1,s2;
    public:
        StackQueue() {
           
        }
        
        void push(int x) {
            s1.push(x);
        }
        
        int pop() {
            while(s1.size()>1){
                s2.push(s1.top());
                s1.pop();
            }
            int popped=s1.top();
            s1.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            return popped;
        }
        
        int peek() {
            while(s1.size()>1){
                s2.push(s1.top());
                s1.pop();
            }
            int popped=s1.top();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            return popped;
        }
        
        bool isEmpty() {
            if(s1.empty()){
                return true;
            }
            return false;
        }
    };