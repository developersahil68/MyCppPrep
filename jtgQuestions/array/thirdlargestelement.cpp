#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
     long  long v1 = LLONG_MIN;
     long  long v2 = LLONG_MIN;
     long  long v3 = LLONG_MIN;

        for(int num : nums){
            if(num == v1 || num == v2 || num == v3){
                continue;
            }

            if(num > v1){
                v3 = v2;
                v2 = v1;
                v1 = num;
            }else if(num > v2){
                v3 = v2;
                v2 = num;
            }else if(num > v3){
              v3 = num;
            }
        }

        if(v3 == LLONG_MIN){
            return int(v1);
        }
       else return int(v3);
    }
};