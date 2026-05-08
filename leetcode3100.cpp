#include<iostream>
using namespace std;


int maxBottlesDrunk(int numBottles, int numExchange) {
        int empty = 0 , drinked = 0 , rem = 0;
        drinked = numBottles;
        empty = drinked;
        numBottles = 0;
        while(empty>0){
            empty-= numExchange;
            if(empty>=0){
                rem = empty;
                numBottles++;
                numExchange++;
                }
        }
        drinked+= numBottles;
        empty = rem;
        empty+= numBottles;
        
        if(empty>= numExchange){
            drinked++;
        }
        
        return drinked;
    }


int main(int argc, char *argv[])
{
	cout<<maxBottlesDrunk(10 , 3);
}