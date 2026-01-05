// CONTAINER WITH MOST WATER 
//You are given an integer array height of length N. There are N vertical lines drawn such that
// the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains
// the most water. Return the maximum amount of water a container can store.

// The Formula:
// Area = (Distance between lines) * (Height of the shorter line)

#include<iostream>
#include<vector>
#include<climits>
using namespace std;


// the bruite force approach .... TC n squared 

int maxwater(vector <int> &vec){
    int mw=INT_MIN , cw , h , w;
    for (int i = 0; i < vec.size(); i++)
    {
       for (int j = i+1; j < vec.size(); j++)
       {
         w = j-i;
         h=  min(vec[i] , vec[j]);
         cw= w*h;
         mw = max(mw , cw);
       }
       
    }
    return mw;
}
// MOST OPTIMISED APPROACH
// ******THE IDEAA******
//1 two pointer approach..
// set two pointers taking the widest possible container
// now we have to decide which line to move
//if we move the taller one .. the width always desreases .. so even if we find the next line bigger.. it doesnt increase the area
// because the water spills above the height of the smaller one
// SO WE HAVE TO MOVE THE SMALLER ONE 

int maxArea(vector <int> vec){
    int l=0 , r = vec.size()-1;
    int mw=0;
    while (l<r)
    {
        int w = r-l;
        int h= min(vec[l] , vec[r]);
        int cw =  w*h;
        mw=max(mw , cw);

        if (vec[l]>vec[r])
        {
            r--;
        }
        else
        l++;
        
    }
    
return mw;
}



int main(){

    vector <int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<<"the maximum water is = "<<maxwater(height)<<endl;
    cout<<"the maximum water is = "<<maxArea(height)<<endl;
    return 0;

}
