#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int i =0 , j = arr.size() -1 , mid , ans = -1;
        while(i <= j){
            mid = i+(j-i)/2;
            if(mid != 0 && mid!= arr.size()-1){
            if(arr[mid] > arr[mid-1] && arr[mid]>arr[mid+1]){
                ans = mid;
                return ans;
            }
            else if(arr[mid] < arr[mid-1] && arr[mid]>arr[mid+1]){
                j = mid-1;
            }
            else if(arr[mid] > arr[mid-1] && arr[mid]<arr[mid+1]){
                i = mid+1;
            }
            }
            else if(mid==0){
                i = mid+1;
            }
            else if(mid== arr.size()-1){
               j = mid-1;
            }
        }
        return ans;
    }

int main(){
    vector<int> vec = {3,5,3,2,0};
    cout<<peakIndexInMountainArray(vec);
    return 0;
}
