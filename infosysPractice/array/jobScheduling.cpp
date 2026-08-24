// 12. In the bustling kingdom of AlgoLand, there lived a clever merchant named Riya who ran a workshop
// offering special services. Every day, clients came to her with unique jobs — each with a deadline and a reward
// (profit) for completing it. However, each job took exactly one full day, and Riya could only handle one job per
// day. She quickly realized that if she wasn’t careful, she’d miss out on valuable profits by picking the wrong jobs.
// One evening, she sat down and looked at all the job requests. Each had a deadline (by when it must be done)
// and an offered payment. She knew that to maximize her gain, she couldn’t just pick the highest-paying job —
// she had to balance deadlines and profits wisely. Riya decided to sort the jobs by profit and then schedule the
// most rewarding ones first, fitting them in the latest day before their deadline if available.
// By doing this smart scheduling, she managed to complete the highest number of jobs possible before their
// deadlines and earned the greatest total profit. Her strategy became famous throughout AlgoLand, and people
// started calling her the "Queen of Optimization.". Help Riya to complete the program to get maximum profit.
// Examples :
// Input: deadline[] = [4, 1, 1, 1], profit[] = [20, 10, 40, 30]
// Output: [2, 60]

#include<vector>
#include<algorithm>
using namespace std;

// this program gives tle on geeksforgeek and i think it expects DSU(disjoint set) solution 


class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        
        int n = deadline.size();
        
        vector<pair<int , int>> jobs;
        
        for(int i = 0 ; i < n ; i++){
            jobs.push_back({profit[i] , deadline[i]});
        }
        
        sort(jobs.begin() , jobs.end() , greater<pair<int , int>>());
        
        int maxDeadline = 0;
        
        for(int i = 0 ; i  < n ; i++){
            maxDeadline = max(maxDeadline , deadline[i]);
        }
        
        vector<int> slots(maxDeadline+1 , -1);
        
        int totalProfit =0;
        int totalJobs = 0;
        
        for(auto job : jobs){
            int profitVal = job.first;
            int deadlineVal = job.second;
            
            
            for(int day =  deadlineVal ; day >= 1 ; day--){
                if(slots[day] == -1){
                    slots[day] = 1;
                    totalProfit += profitVal;
                    totalJobs++;
                    break;
                }
            }
        }
        return {totalJobs , totalProfit};
    }
};