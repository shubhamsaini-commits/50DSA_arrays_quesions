#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxProfit(vector <int> &vec){
    int mp= INT_MIN , cp;
    for (int i = 1; i < vec.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            cp = vec[i]-vec[j];
            mp = max(mp , cp);
        }
        
    }
    if (mp<0)
    {
        return 0;
    }
    
    return mp;

}

// MORE OPTIMISED SOLUTION 


int maxProfit2(vector <int> &vec){
    int min = INT_MAX;
    int mp =0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (min<vec[i])
        {
            min = vec[i];
        }
        if (vec[i]-min> mp)
        {
            mp =vec[i]-min;
        }
        
    }
    return mp;
}

int main(){

    vector <int> prices = {7, 6, 4, 3, 1};

    cout<<"maximum profit is = "<< maxProfit(prices)<<endl;
    cout<<"maximum profit is = "<< maxProfit2(prices);


    return 0;
}