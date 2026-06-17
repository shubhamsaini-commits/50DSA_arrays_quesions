#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


vector<int> searchRange(vector<int>& nums, int target) {
    if(nums.size() == 0) return {-1 , -1};
    int left =-1 ,  right = -1;
    
    int i = 0 , j = nums.size()-1 , mid;
        vector<int> ans = {-1 , -1};

        while(i<=j){
            mid = i +(j-i)/2;
            if(nums[mid]==target){
                left= mid;
                j = mid-1;
            }
            else if(nums[mid] > target){
                j= mid-1;
            }
            else if(nums[mid] < target){
                i= mid+1;
            }
        }
        
         i = 0 ;
        j = nums.size()-1 ;
    
            
    
            while(i<=j){
                mid = i +(j-i)/2;
                if(nums[mid]==target){
                    right= mid;
                    i = mid+1;
                }
                else if(nums[mid] > target){
                    j= mid-1;
                }
                else if(nums[mid] < target){
                    i= mid+1;
                }
            }
        
        
       
        return {left , right };
    }



int main(){
    vector<int> nums = {1,2,3,3,3,3,4,5,9};
    vector<int> ans = searchRange(nums , 3);
    for(int i = 0; i< ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
