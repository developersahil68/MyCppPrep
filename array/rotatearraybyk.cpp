#include<iostream>
#include<vector>
using namespace std;



int main() {
    vector<int> v = {3, 4, 1, 5, 3, -5};
    int k = 8;
    int n = 0;
    int f = 0;


    while (n!=k){
        int ele = v[f];
        v.erase(v.begin() + f);
        v.push_back(ele);
        n++;
    }
      for(int j = 0 ; j < v.size(); j++){
        cout<<v[j]<<" ";
    }
    return 0;


}

// this method is a bruteforrce method which takes very longer time its time complexity comes out to be O(N*K)
// so thats why this solution will not be accepted by online coding platforms 