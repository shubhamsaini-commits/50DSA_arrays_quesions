#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int i = 0; // The "Insert Position" for non-zeroes

    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != 0) {
            // Found a non-zero! Bring it to the front (i)
            swap(nums[i], nums[j]);
            i++; 
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZeroes(arr);
    
    // Print result
    for(int x : arr) cout << x << " "; 
    return 0;
}