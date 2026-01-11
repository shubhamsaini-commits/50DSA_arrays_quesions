#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//find the sum of subarray of size k 


int sum(vector <int> vec , int k){
  int cs= 0 , ms=INT_MIN;
  int st=0 , end = st+k;
  for(int j =0 ; j< k ; j++) {
   cs+= vec[j];
  }
  ms=max(ms , cs);
  while (end<vec.size())
  {
    cs = cs-vec[st] + vec[end];
    st++;
    end++;
    ms = max(cs , ms);
  }

  return ms;

}



int main(){
  vector <int> vec = {2 , 5 , 1 , 3 , 2};
  cout<<sum(vec , 3);
  return 0;
}
