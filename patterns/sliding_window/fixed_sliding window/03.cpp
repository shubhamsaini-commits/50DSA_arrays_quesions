#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// find the maximum sum of subarray that containes atleast x even numbers 

int Evensum(vector<int> vec, int k, int x)
{
    int cs = 0, ms = INT_MIN;
    int st = 0, end = st + k;
    int evenCount = 0;
    for (int j = 0; j < k; j++)
    {
        cs += vec[j];
        if (vec[j] % 2 == 0)
        {
            evenCount++;
        }
    }

    if (evenCount >= x)
    {
        ms = max(cs, ms);
    }

    while (end < vec.size())
    {
        cs = cs - vec[st] + vec[end];
        if (vec[st]%2==0)
        {
            evenCount--;
        }
        if (vec[end]%2==0)
        {
            evenCount++;
        }
        
        st++;
        end++;
        if (evenCount >= x)
        {
            ms = max(cs, ms);
        }

    }
    if (ms== INT_MIN)
    {
        return -1;
    }
    
    return ms;
}

int main()
{
    vector<int> vec = {2 , 1 , 4 , 3 , 6 , 5 };
    cout << Evensum(vec, 3 , 2);
    return 0;
}
