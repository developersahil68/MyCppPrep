// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int arr[6] = {4 , 4, 21 , 14 , -45 , -5};
//     // int arr[6] = {4 , 4,4 , 4 , 4 , 4};
//     int largestElement = arr[0];
//     int secondLargestElement = INT_MIN;

//     for(int i = 1 ; i < 6; i++) {
//         if(arr[i] > largestElement){
//             secondLargestElement = largestElement;
//             largestElement = arr[i];
//         }else if(arr[i] < largestElement && secondLargestElement < arr[i]){
//             secondLargestElement = arr[i];

//         }
//     }

//     cout<<"Largest Element in an array is "<<largestElement<<"\n";
//         if (secondLargestElement != INT_MIN) {
//         cout << "Second Largest Element in the array is " << secondLargestElement;
//     } else {
//         cout << "No distinct second largest element exists.";
//     }


//     return 0;
// }

// another solution

#include<iostream>
#include <climits>
using namespace std;

int main (){
    
     int arr[] = {4 , 4, 21 , 14 , -45 , -5};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int largestElement = INT_MIN + 1;
    int secondLargestElement = INT_MIN ;
    
    for(int i = 0; i < size; i++){
        
        if(arr[i] >= largestElement ){
            
            largestElement = arr[i];
            
        }else{
            
            if(arr[i] > secondLargestElement){
                secondLargestElement = arr[i];
   
            }
        }
        
    }
    
    cout<<largestElement<<"  "<<secondLargestElement<<endl;
    
    
    return 0;
}