// given a sorted array of integers check if there exists a pair of elemenets 
// which adds up to the target x

#include<iostream>
#include<vector>
using namespace std;
   
vector <int> twoSum(vector <int> &vec , int tar){
    int i = 0 ;
    int j = vec.size()-1;
    while(i<j){
        if(vec[i] + vec[j] == tar){
            return {vec[i] , vec[j]};
        }
        else if (vec[i] + vec[j] > tar){
            j--;
        }
        else if (vec[i] + vec[j] < tar){
            i++;
        }
    }
    return {};
}

int main(){
  
  return 0;
}