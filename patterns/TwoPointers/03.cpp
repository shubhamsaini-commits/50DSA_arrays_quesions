// remove duplicates from the array
// preserve the order 


#include<iostream>
#include<vector>
using namespace std;



// this approach uses the ERASE function which increase the complexity 
int remDup(vector <int> &vec){
    int i = 0 ;
    int j = i+1;
    while (j < vec.size())
    {
        if(vec[i] == vec[j]){
            vec.erase(vec.begin() + j);
        }
        else {
            i++;
            j++;
        }
    }
    return vec.size();
}


// optimized approach 
int remDup2(vector <int> &arr){
    int i = 0 ;
    
    for(int j =1 ; j< arr.size() ; j++) {
     if(arr[i] != arr[j]){
        i++;
        arr[i] = arr[j];
     }
    }
    return arr.size();
}



int main(){
  vector <int> vec = {1 , 1  , 2 , 3 , 4 };
    remDup2(vec);
    for(int i = 0; i < vec.size(); i ++){
        cout<<vec[i];
    }
  return 0;
}