#include<iostream>
#include<vector>
using namespace std;
int findMissing(vector <int> vec , int N){
    int sum = N*(N+1)/2;
    int vecsum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        vecsum+= vec[i];
    }
     return sum-vecsum;
}

int main(){


    return 0;
}