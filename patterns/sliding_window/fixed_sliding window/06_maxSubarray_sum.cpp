// FIND THE MAXIMUM SUM OF SUBARRAY OF SIZE K WITH EXACTLY X DISTINCT ELEMENTS
#include <iostream>
#include <vector>
#include <climits>
using namespace std;


//THE BRUITEFORCE APPROACH... 
// HERE WE ARE CALCULATING SUM AGAIN AND AGAIN FOR EVERY POSSIBLE WINDOW...
int findSum(vector<int> &arr, int st, int end)
{
    int sum = 0;
    for (int j = st; j <= end; j++)
    {
        sum += arr[j];
    }
    return sum;
}

int findMaxSum(vector<int> &arr, int k, int x)
{
    if(k>arr.size()) return -1;

    if(x>k) return -1;
    int dis = 0, st = 0, end = st + k - 1, cs = 0, ms = INT_MIN;
    vector<int> frequency(100001, 0);

    for (int j = 0; j < k; j++)
    {
        if (frequency[arr[j]] == 0)
        {
            dis++;
        }
        frequency[arr[j]]++;
    }
    if (dis == x)
    {
        cs = findSum(arr, st, end);
        ms = max(cs, ms);
        
    }
    
    for (end = end + 1; end < arr.size(); end++)
    {
        frequency[arr[st]]--;
        if (frequency[arr[st]] == 0)
        {
            dis--;
        }
        st++;
        
        frequency[arr[end]]++;
        if (frequency[arr[end]] == 1)
        {
            dis++;
        }
        if (dis == x)
        {
            cs = findSum(arr, st, end);
            ms = max(cs, ms);
           
        }
    }
    if(ms==INT_MIN) return -1;
    return ms;
}




//OPTMIZED APPROACH 

int findMaxSum2(vector<int> &arr, int k, int x)
{
    if(k>arr.size()) return -1;

    if(x>k) return -1;
    int dis = 0, st = 0, end = st + k - 1, cs = 0, ms = INT_MIN;
    vector<int> frequency(100001, 0);

    for (int j = 0; j < k; j++)
    {
        if (frequency[arr[j]] == 0)
        {
            dis++;
        }
        frequency[arr[j]]++;
        cs+= arr[j];
    }
    if (dis == x)
    {
        ms = max(cs, ms);
        
    }
    
    for (end = end + 1; end < arr.size(); end++)
    {
        frequency[arr[st]]--;
        if (frequency[arr[st]] == 0)
        {
            dis--;
        }
        st++;
        
        frequency[arr[end]]++;
        if (frequency[arr[end]] == 1)
        {
            dis++;
        }
        cs = cs- arr[st-1];
        cs = cs+ arr[end];
        if (dis == x)
        {
            ms = max(cs, ms);
           
        }
    }
    if(ms==INT_MIN) return -1;
    return ms;
}

int main()
{
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};

    cout<<findMaxSum(arr , 4 , 3);
    cout<<findMaxSum2(arr , 4 , 3);
    return 0;
}