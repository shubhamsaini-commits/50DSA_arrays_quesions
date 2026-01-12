// find the maximum number of distinct elements in any continuous subarray of size k
#include <iostream>
#include <vector>
#include <climits>

using namespace std;


// bruiteforce appraoch where we count every distinct elements in every possible window 
int findDis(vector<int> &vec, int k)
{
    int maxDist = INT_MIN;
    for (int i = 0; i < vec.size() - k; i++)
    {
        vector<int> frequency(100000, 0);
        int dis = 0;
        for (int j = i; j < i + k; j++)
        {
            if (frequency[vec[j]] == 0)
            {
                dis++;
            }
            frequency[vec[j]]++;
        }
        maxDist = max(maxDist, dis);
    }
    return maxDist;
}



//OPTIMIZED APPROACH ....
// 1) create a window , count distinct elements 
// 2) then move the window and check only incoming and outgoing elements 
int findDis2(vector <int> &arr , int k ){
    int ans = INT_MIN;
    vector <int> frequency(100000,0);
    int st=0, end = st + k -1;
    int dis=0;
    for(int j =0 ; j< k ; j++) {
        if (frequency[arr[j]]==0)
        {
            dis++;
        }
        frequency[arr[j]]++;
     
    }
    ans = dis;
    for(end; end<arr.size() ; end ++){
        frequency[arr[st]]--;
        if (frequency[arr[st]]==0)
        {
            dis--;
        }
        st++;

        if (frequency[arr[end]]==0)
        {
            dis++;
        }
        
        ans = max(ans , dis);

    }
   
    return ans;
}



int main()
{
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    // int ans = findDis(arr, 4);
    int ans1 = findDis2(arr, 4);
    // cout << ans;
    cout << ans1;
    return 0;
}
