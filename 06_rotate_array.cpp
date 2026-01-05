#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// vector<int> rev(vector<int> &vec, int start, int end)
// {
//     while (start <= end)
//     {
//         swap(vec[start], vec[end]);
//         start++;
//         end--;
//     }
// }

// void rotate(vector<int> &vec, int K, int N)
// {
//     K = K%N;
//     rev(vec, 0, K - 1);

//     int i = 0, j = N - K;
//     while (j < N)
//     {
//         swap(vec[i], vec[j]);
//         i++;
//         j++;
//     }

//     rev(vec, K, N - 1);
// }


// THE ABOVE CODE IS ASS 

// correct method to do is.. 
// 1 reverse the whole array 
// 2 reverse the first k elements 
// 3 reverse the remaining elements 


void rotate(vector <int> &vec ,int k){
    reverse(vec.begin() , vec.end());
    reverse(vec.begin() , vec.begin()+k);
    reverse(vec.begin()+k , vec.end());

}



int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    rotate(nums , 3);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}