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


vector<int> plusOne(vector<int>& digits) {
        if(!digits.size()){
            return digits;
        }
        if(digits.size() == 1){
            if(digits[0] == 9){
                return {1 , 0};
            }
            else {
            digits[0]++;
            return digits;
            }
        }
        int size = digits.size() - 1;

        while (size>= 0){
            if(digits[size] != 9){
                digits[size]++;
                return digits;
            }
            else if(digits[size] == 9 && size==0){
                digits[size] = 1;
                digits.push_back(0);
            }
            else if(digits[size]  == 9 && size>0){
                digits[size] = 0;
            }
            size--;

        }
        return {NULL};
    }



int main(){
  vector<int> num = {9 , 9};
  vector<int> ans = plusOne(num);

  for(int x: ans){
    cout<<x<<endl;
  }
  return 0;
}