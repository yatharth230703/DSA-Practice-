
class Node {
    public:
        int data;
        Node* next;
    
        Node(int val) {
            data = val;
            next = nullptr;
        }
    };
    class LinkedListStack {
    
    private :
       Node * top1 = new Node(-1);
       int size=0;
    
    public:
        LinkedListStack() {
        }
        
        void push(int x) {
            Node*temp = new Node(x);
            temp->next=top1;
            top1=temp;
            size++;
        }
        
        int pop() {
            Node*temp=top1;
            int val;
            if (top1!=NULL){
                val=top1->data;
            }
            top1=top1->next;
            temp->next=NULL;
            delete(temp);
            size--;
            return val;
        }
        
        int top() {
            return top1->data;
        }
        
        bool isEmpty() {
            if(size==0){
                return true;
            }
            return false;
        }
    };