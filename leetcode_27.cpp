#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


// given an array nums.. and an integer k 
// remove all the occurence of k 
// and return the number of elements in the remaining array 
// order may change !....

// SOLUTION!...
// -> Using two pointers .. left pointer for checking if element is 'k'.. right pointer for swapping it with last element ! (since order doesnt matter)

int removeElement(vector<int>& nums, int val) {
        int left= 0; 
        int right = nums.size()-1 , count = 0;
        while(left <= right){
            if(nums[right] == val){
                right--;
                continue;
            }
            if(nums[left]== val){
                swap(nums[left] , nums[right]);
                right--;
                left++;
            }
            else left++;
            
        }
        for(int x : nums){
            if(x!= val){
                count++;
            }
        }
        return count;
    }





int main(){
    vector <int> test = { 3 , 1, 3 , 3 ,3};
    removeElement(test , 3);

    for(int x : test){
        cout<<x<<endl;
    }
    return 0;
}
