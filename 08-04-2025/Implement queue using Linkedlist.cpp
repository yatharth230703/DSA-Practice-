class Node {
    public:
        int data;
        Node* next;
    
        Node(int val) {
            data = val;
            next = nullptr;
        }
    };
    
    class LinkedListQueue {
    private:
        Node*front;
        Node*rear;
        int size=0;
    public:
        LinkedListQueue() {
            front=NULL;
            rear=NULL;
        }
        
        void push(int x) {
            Node*temp=new Node(x);
            if(rear==NULL){
                front=temp;
                rear=temp;
            }
            else {
                rear->next=temp;
                rear=temp;
            }
            size++;
        }
        
        int pop() {
            if(front==NULL){
                return 0;
            }
            if(front==rear){
                int val=front->data;
                front=NULL;
                rear=NULL;
                size--;
                return val;
                
            }
            int val=front->data;
            front=front->next;
            size--;
            return val;
        }
        
        int peek() {
            if(front==NULL){
                return 0;
            }
            return front->data;
        }
        
        bool isEmpty() {
            if(size==0){
                return true;
            }
            return false;
        }
    };