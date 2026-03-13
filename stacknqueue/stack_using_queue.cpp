#include<iostream>
#include<queue>

using namespace std;


class MyStack {
        queue<int> q;
public:
    MyStack() {

    }
    
    void push(int x) {
       int  s = q.size();
        q.push(x);

        for(int i = 0 ; i < s ; i++){
            q.push(q.front());
            q.pop();
        }

    }
    
    int pop() {
         int val = q.front();
        q.pop();
        return val;
    }
    
    int top() {
     return   q.front();
    }
    
    bool empty() {
        if(q.size() == 0) return true;
        return false;
    }
};