#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int maxSum(vector <int> vec){
    int sum = 0 , ms = INT_MIN;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
        ms = max(sum , ms);
        if(sum<=0){
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