// 11.Once upon a time in a small village, a wise king wanted to attend as many village festivals as possible in one
// day. Each festival had a start and end time, and the king could only attend one at a time. His advisor suggested
// picking only the festivals that ended the earliest, so he could fit more in. The king followed this advice, selecting
// the next festival that started after the last one ended. By the end of the day, he had enjoyed the most
// celebrations possible without any overlaps. The villagers were amazed at his perfect schedule, and the king
// declared it a royal strategy for future festivals.
// Examples:
// Input: start[] = [1, 3, 0, 5, 8, 5], finish[] = [2, 4, 6, 7, 9, 9]
// Output: 4
// Explanation: A person can attend 4 functions. The maximum set of functions that can be attended is {0, 1, 3, 4}
// (These are indexes in start[] and finish[])

// same as leetcode 435

#include<vector>
#include<algorithm>
using namespace std;

int kingAttendingFestivals(vector<int> &start , vector<int> &end){

    vector<pair<int , int>> festivals;

    for(int i = 0; i < start.size() ; i++){
        festivals.push_back({start[i] , end[i]});
    }

    sort(festivals.begin() , festivals.end() , [](const pair<int, int> &a , const pair<int, int> &b){return a.second < b.second;});

    int lastEnd = festivals[0].second;
    int count = 1;

    for(int i = 1 ; i < festivals.size() ; i++){
        if(festivals[i].first >= lastEnd){
            count++;
            lastEnd = festivals[i].second;
        }
    }
    return count;

}

int main() {

    return 0;
}
