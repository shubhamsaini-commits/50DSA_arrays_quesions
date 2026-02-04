// CONTAINER WITH MOST WATER
// AN array of height given which containes the height of vertical lines 
// at that index
// the goal is to pick two lines that containes the most water 





#include<iostream>
#include<vector>
#include<climits>
using namespace std;
   

 int containerMaxWater(vector <int> &arr){
    int i = 0 ;
    int j = arr.size() - 1;
    int currentArea , maxArea = 0;

    while(i<j){
        currentArea = min(arr[i] , arr[j]) * (j-i);
        maxArea = max(currentArea , maxArea);
        if(arr[i]<arr[j]){
            i++;
        }
        else j--;
    }
    return maxArea;
}


int main(){
  vector <int> arr = {1,8,6,2,5,4,8,3,7};
    cout<<containerMaxWater(arr);
  return 0;
}