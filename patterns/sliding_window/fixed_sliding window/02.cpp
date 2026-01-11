#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// find maximum possible average of subarray of size k


float average(vector <int> vec , int k){
  int cs= 0 ;
  int ms=INT_MIN;
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

  return (float)ms/(float)k;

}



int main(){
  vector <int> vec = {1 , 12 , -5 , -6 , 50 , 3};  
  float ans = average(vec , 4);
  cout<<ans;
  return 0;
}
