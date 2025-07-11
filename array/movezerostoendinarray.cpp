#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {3, 4, 0, 2, 0, -5};
    int nonZeroElementIndex = 0;
    

    for(int i = 0 ; i < v.size() ; i++){
       if(v[i] != 0){
        v[nonZeroElementIndex] = v[i];
        nonZeroElementIndex++;
       }
    }

    for(int j = nonZeroElementIndex ; j < v.size(); j++){
        v[j] = 0;
    }

      for(int j = 0 ; j < v.size(); j++){
        cout<<v[j]<<" ";
    }

    return 0;
    
}




// this is what i have thought first and it works but the complexity comes out to be O(N*2) which is bad 
// so thats why we have find another solution that is in the upper part
//  vector<int> v = {3, 4, 0, 2, 0, -5};
// int n = 0;
// int f = 0;

// while (n!=v.size()){
//     if(v[f] == 0){
//         int ele = v[f];
//         v.erase(v.begin() + f);
//         v.push_back(ele);
//          n++;
//     }else{
//         f++;
//          n++;
//     }
// }
//   for(int j = 0 ; j < v.size(); j++){
//     cout<<v[j]<<" ";
// }