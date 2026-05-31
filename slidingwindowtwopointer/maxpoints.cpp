#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

     int n = cardPoints.size();
      int lSum = 0;
      int rSum = 0;
      int maxSum = 0;

      for(int i = 0 ; i < k ; i++){
        lSum +=  cardPoints[i];
        maxSum = lSum;
      } 

      int rIndex = n-1;

      for(int i = k-1 ; i >=0 ; i--){
        lSum = lSum - cardPoints[i];
        rSum = rSum + cardPoints[rIndex];
        rIndex = rIndex -1;
        int sum = lSum + rSum;

        maxSum = max(maxSum , sum);
      }
      return maxSum;
    }
};

