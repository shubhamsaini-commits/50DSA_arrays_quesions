#include <iostream>
#include <vector>
using namespace std;
vector<int> unionn(vector<int> vec1, vector<int> vec2)
{
    int i = 0, j = 0;
    int count = 0;
    vector<int> join;
    while (i < vec1.size() && j < vec2.size())
    {
        cout<<i<<" "<<j<<endl;
      if(vec1[i]<vec2[j]){
        i++;
      } 
      else if (vec1[i]>vec2[j])
      {
        j++;
      }
      else if (vec1[i]=vec2[j])
      {
        join.push_back(vec1[i]);
        i++;
        j++;
      }
      
      
    }
    return join;
}

int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 2, 3, 6};
    vector<int> soln = unionn(arr1, arr2);
    for (int i = 0; i < soln.size(); i++)
    {
        cout << soln[i] << " ";
    }

    return 0;
}