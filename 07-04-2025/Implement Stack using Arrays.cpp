class ArrayStack {

    private:
            vector<int>stack ;
            //size k liye i can use vector size 
            //top k liye I should be using an integer that points to current position,increasing and decreasing with push/pop
            int top_ele;
    public:
        ArrayStack() {
            top_ele=-1;
    
        }
        
        void push(int x) {
            stack.push_back(x);
            top_ele++;
        }
        
        int pop() {
            if (top_ele == -1) {
                throw out_of_range("Stack Underflow");
            }
            int popped=stack[top_ele];
            stack.erase(stack.begin()+top_ele);
            top_ele--;
            return popped;
        }
        
        int top() {
            if (top_ele == -1) {
                throw out_of_range("Souta range");
            }
            return stack[top_ele];
        }
        
        bool isEmpty() {
            if(stack.size()==0){
                return true;
            }
            return false;
        }
    };