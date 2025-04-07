#include <queue>
using namespace std;

class QueueStack {
private:
    queue<int> s1, s2;

public:
    QueueStack() {}

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s1.empty()) return 0; // or throw exception

        // Leave last element in s1, move others to s2
        while (s1.size() > 1) {
            s2.push(s1.front());
            s1.pop();
        }

        int popped = s1.front();
        s1.pop();

        // Swap queues
        swap(s1, s2);
        return popped;
    }

    int top() {
        if (s1.empty()) return 0; // or throw exception

        while (s1.size() > 1) {
            s2.push(s1.front());
            s1.pop();
        }

        int top = s1.front();
        s2.push(top);
        s1.pop();

        swap(s1, s2);
        return top;
    }

    bool isEmpty() {
        return s1.empty();
    }
};
