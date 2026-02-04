// TRAPPING RAIN WATER 
// given an array where each element represents
// elevation map height compute how much water it can trap after raining 

// A SHORT MIND MAP WHAT PROBLEM DEMANDS 
// WE ARE SUPPOSE TO CALCULATE THE NUMBER OF W's
// Water (W):
// Height 5:           #
// Height 4: # W W W W #
// Height 3: # W W # W #
// Height 2: # # W # # #
// Height 1: # # W # # #
// Height 0: # # # # # #


#include<iostream>
#include<vector>
using namespace std;

int trappedWater(vector <int>  &arr){
    // TODO revise thie question and logic
    int i = 0 ,  j= arr.size()-1 , totalWater = 0;
    int leftMax = 0 , rightMax = 0;
    while(j>i){
        // cout<<"hiee";
        // cout<<totalWater<<" "<<i<<" "<<j<<endl;
        if(arr[i]>arr[j]){
            rightMax = max(rightMax , arr[j]);
            totalWater += rightMax - arr[j];
            j--;
        }
        else
        {
            leftMax = max(leftMax , arr[i]);
            totalWater += leftMax - arr[i];

            i++;
        }
    }
    return totalWater;
}


int main(){
  
    vector <int> arr = {4, 2, 5, 3, 2, 1};

    cout<<trappedWater(arr);

  return 0;
}