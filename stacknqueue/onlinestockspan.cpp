#include<stack>
#include<vector>
using namespace std;

// main idea behind this question is just use the concept of previous larger element and just subtrack there idx with the current idx of our element

class StockSpanner {
public:
    stack<pair<int , int>> st;
    int idx = -1;
    StockSpanner() {
        idx = -1;
          st = stack<pair<int, int>>();
    }
    
    int next(int price) {


        idx = idx+1;

        while(!st.empty() && st.top().first <= price){
            st.pop();
        }

        int ans = idx - (st.empty() ? -1 : st.top().second);

        st.push({price , idx});
  
        return ans;
        
    }
};
