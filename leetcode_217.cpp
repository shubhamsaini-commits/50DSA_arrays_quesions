#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// return true if any number appears twice in the given array else return false

bool containsDuplicate(vector<int> &nums)
{

    unordered_map<int, int> mp;

    for (int x : nums)
    {
        mp[x]++;
        if (mp[x] != 1)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    return 0;
}
