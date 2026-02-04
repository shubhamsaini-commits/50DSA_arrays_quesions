// remove zeroes to the end of array 

#include<iostream>
#include<vector>
using namespace std;
   
int moveZeroes(vector <int> &arr){
    int i=0 ;
    int j ;
    for( j =0 ; j< arr.size() ; j++) {
     if(arr[j]!=0){
        swap(arr[i] , arr[j]);
        i++;
     }
    }
//    cout<<i;
    // for(i; i<arr.size(); i++){
    //     arr[i]=0;
    // }
}


int main(){
  vector <int> vec = {1 , 2  , 0 , 0 , 4 };
    moveZeroes(vec);
    for(int i = 0; i < vec.size(); i ++){
        cout<<vec[i];
    }
  return 0;
}