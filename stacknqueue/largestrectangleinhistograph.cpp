#include<vector>
#include<stack>
#include<climits>
using namespace std;


// if anyone wants to revise the approach this might helps.
// For the optimal approach: we are trying to compute the answer in single pass -> that means we have to know the nse,pse for the elements-> we can get pse on the go as we are maintaining a monotonic stack in increasing order {1,3,4,7...} so we can see for every element the pse is the previous one of it in the stack.
// but wait a second how do we know the nse -> so here is the catch actually we are not computing answer on the go rather we are coming back to compute it -> what does that mean , as we can see we are maintaining an increasing order so whenever we are at a point when we get a smaller element, it means it is (nse) for the element which is on the top of the stack .
// now we can say we have both nse ans pse for the top element , so we can compute answer for it .
// but what if we have elements left in the stack after the computation :
// so it simply means we were not able to find nse for the top element , as a result we can take a hypothetical index (array size) for nse.
// and for the pse in edge case we can take -1.
// Don't get confuse whether we have computed for every element or not as we are going to put all the elements at least once in the stack , so the computation will be done for all.
// hope it helps.😊

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxans = 0;

        for(int i = 0; i < n ; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int ele = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty()? -1 : st.top();

                maxans = max(heights[ele] * (nse - pse -1) , maxans );
            }
            st.push(i);
        } 
        while(!st.empty()){
            int nse = n;
            int ele = st.top();
            st.pop();
            int pse = st.empty()? -1 :  st.top();

            maxans = max(heights[ele] * (nse - pse -1) , maxans );

        }
        return maxans;
    }
};