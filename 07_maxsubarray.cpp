// THE QUESTION.....
// Given an integer array nums,
// find the contiguous subarray (containing at least one number) which has the largest sum and return that sum.
// Input: nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4}
// Output: 6 --> 4 , , -1  , 2 , 1 gives the maximum sum...


#include<iostream>
#include<vector>
#include<climits>
using namespace std;


// THIS IS THE MOST OPTIMIZED APPROACH FOR GETTING MAXIMUM SUBARRAY ..
// KNOWN AS KADANE'S ALGORITHM..
// THE MAIN IDEA IS JUST KEEP ADDING THE ELEMENTS ... AT ANY MOMENT .. OUR CURRENT SUM GETS NEGATIVE.. SET IT TO ZERO .. 
// and take maximum of cs and ms.. 


int maxSum(vector <int> vec){
    int sum = 0 , ms = INT_MIN;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
        ms = max(sum , ms);    // THE SIDE CASE... suppose the array only has the negative elements.. 
        if(sum<=0){            //if we set sum = 0 before the ms = max() our answer will always be 0 .. which is wrong  !! 
            sum=0;
        }
    }
    return ms;
}


int main(){
    vector <int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<maxSum(nums);


    return 0;

}
