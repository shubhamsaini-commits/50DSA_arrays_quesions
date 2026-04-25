#include <iostream>
#include <vector>

#include <unordered_map>
using namespace std;


int maxArea(vector<int>& height) {
        int area =0 ;
        int left = 0 , right = height.size()-1;
        while(left<right){
            
            area = max(min(height[left] , height[right]) * (right - left ), area);
            if(height[left]>= height[right] ){
                right--;
            }
            else if(height[left]< height[right] ){
                left++;
            }

           
        }
        return area;
    }



int main(){
    vector <int> height = {1,1};
    cout<<maxArea(height);
    return 0;
}
