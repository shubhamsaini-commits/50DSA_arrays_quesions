#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;



int bin(vector<int>& nums , int i , int j , int tar){
   int ans = -1;
   while(i <= j){
    ans = i + (j - i)/2;
    if(nums[ans]== tar){
        
        return ans;
    }
    else if(nums[ans]> tar){
        j = ans-1;
    }
    else{
        i = ans+1;
    }
}
return -1;
}

int search(vector<int>& nums, int target){
    if(nums.size()<=2){
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]==target){
                return i;
            }
        }
        
    }


    int i = 0 , j = nums.size()-1;
    int pivot = 0;
    if(nums[0]>= nums[nums.size()-1]){
        pivot = i + (j - i)/2;
        while(i<j){
        
        if(nums[pivot]>= nums[0]){
            i = pivot+1;
        }
        else {
            j = pivot;
        }
        pivot = i + (j - i)/2;
    }
    }
    
  
    if(pivot == 0){
        return bin(nums , 0 , nums.size()-1 , target);
    }
    else if(pivot>0 && pivot< nums.size()-1){
        if(target>=nums[0]){
            return bin(nums , 0 , pivot-1 , target);
        }
        else {
            
            return bin(nums , pivot, nums.size()-1 , target);
        }
    }
    else{
        if(target>=nums[0]){
            return bin(nums , 0 , pivot-1 , target);
        }
        else{
            if(nums[pivot]==target){
                return pivot;
            }
            else -1;
        }
    }
    return -1;
}


int main(){
    vector <int> nums = {3 , 5 , 1 };
    cout<<search(nums , 1);
    return 0;
}
