class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {}

    void push(int x) {
        // Move all elements to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Push new element
        s1.push(x);

        // Move back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop() {
        int val = s1.top();
        s1.pop();
        return val;
    }

    int peek() {
        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};