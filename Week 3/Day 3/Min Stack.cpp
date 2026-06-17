class MinStack {
    vector<int> arr;
    vector<int> mini;
    int topi;
    int currmin = INT_MAX;

public:
    MinStack() {
        topi = -1;

    }
    
    void push(int val) {
        // if (topi == 99) {
         
        //     return;
        // }
        arr.push_back(val);
        if(mini.empty()){
            mini.push_back(val);
        }
       else{
        mini.push_back(min(val,mini.back()));
       }
    }
    
    void pop() {
         if (arr.empty()) {
          
            return;
        }
        arr.pop_back();
        mini.pop_back();
    }
    int top(){
     return  arr.back();
    }
    
    int getMin() {
        return mini.back();
    }
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
