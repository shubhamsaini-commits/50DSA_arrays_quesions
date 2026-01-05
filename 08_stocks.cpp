// BEST TIME TO BUY AND SELL STOCK
// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a
// different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// EXAMPLE.. 
// Input: prices = {7, 1, 5, 3, 6, 4}
// Output: 5


#include<iostream>
#include<vector>
#include<climits>
using namespace std;



// the bruiteforce approach.. where we ara checking every possible progit and returning the maximum value..
// Time complexity n squared
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
        if (min<vec[i]) // remember which day the stock was cheapest
        {
            min = vec[i];
        }
        if (vec[i]-min> mp)
        {
            mp =vec[i]-min;  // the maximum profit...
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
