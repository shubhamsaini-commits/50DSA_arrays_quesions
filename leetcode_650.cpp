#include<iostream>
#include<vector>
using namespace std;
// leetcode 2 keyboards problem 
int minSteps(int n) {
        vector<int> vec = {0} ; 
        int i = 2 , ans =0;
        while(n != 1){
            if(n%i == 0){
                vec.push_back(i);
                n/=i;
                }
                else
                i++;
        }
        for(int x: vec){
            ans += x;
            }
            return ans;
    }


int main(int argc, char *argv[])
{
	cout<<minSteps(4);
}
