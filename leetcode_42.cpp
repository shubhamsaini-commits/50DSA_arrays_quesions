#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;




// slow approach !!
int trap(vector<int>& height) {
    unordered_map<int ,int> mp;
    int maxRight = height[height.size()-1];
    int maxLeft = height[0];
    for(int i = height.size() - 1; i >=0; i--){
        if(height[i]> maxRight){
            maxRight = height[i];
        }
        mp[i] = maxRight;
    }
    int chunk = 0 , ans = 0;
    for(int i = 0; i < height.size(); i++){
        if(maxLeft < height[i]){
            maxLeft = height[i];
        }
        chunk = min(mp[i] , maxLeft) - height[i];
        if(chunk > 0){
            ans+= chunk;
        }
    }
    return ans;
}





int trap2(vector<int> &height){
    int maxRight = 0 , maxLeft = 0 , left =0 , right = height.size() - 1 , ans = 0;

    while(left< right){
        if(height[left] > maxLeft){
            maxLeft = height[left];
        }
        if(height[right] > maxRight){
            maxRight = height[right];
        }

        if(height[left]< height[right]){
            ans+= maxLeft - height[left];
            left++;
        }
        else{
            ans+= maxRight - height[right];
            right--;
        }

    }
    return ans;
}





int main(){
    vector <int> height = {4,2,0,3,5};

    cout<<trap(height)<<endl;
    cout<<trap2(height);
    return 0;

}
