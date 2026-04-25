#include <iostream>
#include <vector>
using namespace std;


// search inserted position...
// use binary search to do this in logn complexity ..




// MY BROKEN LOGIC... DOSENT WORK AT ALL !!

// if( j-i == 1){
//     if(nums[i] == target){
//         return i;
//     }
//     else if(nums[j] == target){
//         return j;
//     }
//     return i+1;
// }
int searchInsert(vector<int>& nums, int target) {
        if(nums[nums.size()-1] <target) return nums.size();
        if(nums[nums.size()-1] == target) return nums.size()-1;
        else if(nums[0] >target || nums[0]== target) return 0;


        int i = 0 , j = nums.size()-1 , mid;
        while(i<=j){
            if(j-i == 1){
                if(nums[i]== target){
                    return i;
                }
                else if(nums[j]== target){
                    return j;
                }
                return j;
            }

            mid = (j+i)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                j = mid;
            }
            else if(nums[mid] < target){
                i = mid;
            }
        }
        return mid+1;
    }





int main(){
    vector <int> nums = {1 , 3 ,  4 , 5 , 7};
    cout<<searchInsert(nums , 2);
    return 0;
}
