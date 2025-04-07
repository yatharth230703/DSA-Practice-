class ArrayQueue {
    private:
         vector<int>queue;
    
    public:
        ArrayQueue() {
        }
        
        void push(int x) {
            queue.push_back(x);
            
        }
        
        int pop() {
            if(queue.size()==0){
                throw out_of_range("alr empty");
            }
            int popped=queue[0];
            queue.erase(queue.begin());
            return popped;
    
        }
        
        int peek() {
            return queue[0];
        }
        
        bool isEmpty() {
            if(queue.size()==0){
                return true;
            }
            return false;
        }
    };