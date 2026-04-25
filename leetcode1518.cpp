#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int numWaterBottles(int numBottles, int numExchange) {
        int drinked =0 , empty =0;
        while(numBottles>0){
            drinked+= numBottles;
            empty += numBottles%numExchange;
            numBottles/= numExchange;
            if(empty>= numExchange){
                drinked+= empty/numExchange;
                empty/=numExchange;
            }
        }
        
        return drinked;
    }


int main(){
    cout<<numWaterBottles(25 , 4);

    return 0;
}
