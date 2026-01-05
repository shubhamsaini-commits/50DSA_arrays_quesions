#include<iostream>
#include<vector>
#include<climits>
using namespace std;
   
// BRUITFORCE APPROACH .. BIG O N SQUARED COMPLEXITY

vector <int> duplicate(vector <int> &vec){
    vector <int> ans;
    for (int i = 0; i < vec.size(); i++)
    {
        for(int j =i+1 ; j< vec.size() ; j++) {
            if (vec[i]==vec[j])
         {
            ans.push_back(vec[i]);
        }
        
    }
}
return ans;
}

// OPTIMISED APPROACH.. 
// ITERATE THROUGH THE WHOLE ARRAY ..
// WHEN YOU SEE X.. JUMP TO X-1
// MARK THE ELEMENT AT THAT INDEX TO NEGATIVE 
// IF WE REVISIT THAT NUMBER IF IT TURNS OUT TO BE NEGEATIVE THEN IT MEANS THAT IT WAS ALREADY 
// MARKED.. HENCE THE NUMBER MUST BE DUPLICATE 
// 

vector <int> duplicate2(vector <int> &vec){
    vector <int> ans;

    for(int j =0 ; j< vec.size() ; j++) {
        if (vec[abs(vec[j])-1]<0)
        {
            /* code */
            ans.push_back(abs(vec[j]));
        }
        
        else{
            vec[abs(vec[j])-1]*=-1;
        }

        
    }
    return ans;
}




int main(){
  vector <int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
//   vector <int> ans = duplicate(nums);
  vector <int> ans = duplicate2(nums);

//   cout<<ans.size();
//   cout<<nums.size();
for(int j =0 ; j< ans.size() ; j++) {
 cout<<ans[j]<<" ";
}

  return 0;
}