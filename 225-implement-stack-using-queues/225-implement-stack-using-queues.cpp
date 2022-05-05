class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int s=q1.front();
        q1.pop();
        q1=q2;
        while(!q2.empty()){
            q2.pop();
        }
        return s;
    }
    /** Get the top element. */
    int top() {
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int s=q1.front();
        q2.push(q1.front());
        q1=q2;
        while(!q2.empty()){
            q2.pop();
        }
        return s;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};