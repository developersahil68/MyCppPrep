#include<vector>
#include<stack>
#include<climits>
using namespace std;

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
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        int maxArea = 0;
         vector<int> height(m , 0);

         for(int i = 0; i < n ; i++) {
            for(int j = 0; j < m ; j++) {
              if(matrix[i][j] == '1' ){
                height[j]++;
              }else{
                height[j] =0;
              }
            }
            int area = largestRectangleArea(height);
            maxArea = max(area , maxArea);
         }
         return maxArea;
    }
};