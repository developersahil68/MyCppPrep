#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // int arr[5]  = {0, 3 , 0 , 8 , -1};

    // for(int i = 0; i < 5; i++ ){

    // }

    // return 0;

    vector<int> v = {3, 4, 0, 5, 0, -5};
    // int k = 8;
    int n = 0;
    int f = 0;


    while (n!=v.size()){
        if(v[0] == 0){

            int ele = v[f];
            v.erase(v.begin() + f);
            v.push_back(ele);
        }else{
            f++;
        }
        n++;
    }
      for(int j = 0 ; j < v.size(); j++){
        cout<<v[j]<<" ";
    }
    return 0;

}