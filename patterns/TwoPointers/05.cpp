#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


// given a sorted array ..  return the array of sorted squares of that given array
// array may contains negetive numbers 

int s(vector <int> &arr , int ans[]){
    int i =0 , j = arr.size()-1;
    int count = j;
    
    while(count>=0){
        if( abs(arr[i]) > abs(arr[j]) ){
            ans[count] = arr[i] * arr[i];
            i++;
            }
            
           else {
               ans[count] = arr[j] * arr[j];
               j--;
               }
          count--;
        }
      
        return 0;
}





int main(){
    vector <int> arr = {-4 , -1 , 0 , 3 ,10};
    int ans[arr.size()];
    s(arr , ans);
    
    for(int i = 0; i<arr.size() ; i++){
        cout<<ans[i]<<endl;
    }
    
  return 0;
}