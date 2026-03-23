#include<stack>
#include<climits>
using namespace std;

// easy method where the time complexity is bigOn and space is 2*N we can reduce space complexity but ...

class MinStack {
    stack<pair<int , int>> st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty() ){
            st.push({val , val});
        }else{
            int minVal = min(val , st.top().second);
            st.push({val , minVal});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
