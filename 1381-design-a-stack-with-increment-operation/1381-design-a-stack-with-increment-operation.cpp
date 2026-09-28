class CustomStack {
public:
    stack<int>st;
    int currsize=0;
    int maxSize;
    CustomStack(int maxSize) {
        this->maxSize=maxSize;
    }
    
    void push(int x) {
        if(currsize>=maxSize){
            return;
        }
        st.push(x);
        currsize++;
    }
    
    int pop() {
        if(st.empty()) return -1;
        int x=st.top();
        currsize--;
        st.pop();
        return x;
    }
    
    void increment(int k, int val) {
        stack<int>st1;
        while(!st.empty()){
            st1.push(st.top());
            st.pop();
        }
        if(k>=currsize){
            while(!st1.empty()){
                st.push(st1.top()+val);
                st1.pop();
            }
            return;
        }
        for(int i=1;i<=k;i++){
            st.push(st1.top()+val);
            st1.pop();
        }
        while(!st1.empty()){
            st.push(st1.top());
            st1.pop();
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */