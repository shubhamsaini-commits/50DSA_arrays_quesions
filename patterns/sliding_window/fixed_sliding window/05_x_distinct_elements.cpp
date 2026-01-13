// count how many contegious subarray of size k has exactly x distinct elements 
#include<iostream>
#include<vector>
using namespace std;
   
//BRUITEFORCE APPROACH
int countDis1(vector<int> &arr , int k  , int x){
    int count = 0;
    for (int i = 0; i < arr.size()-k+1; i++)
    {
        int dis = 0;
        vector <int> freq(100001 , 0);
        for(int j =i ; j< k ; j++) {
            if (freq[arr[j]]==0)
            {
                dis++;
            }
            
         freq[arr[j]]++;
        }
        if(dis==x){
            count++;
        }
    }
    return count;
}




int countDis(vector <int> &arr , int k , int x ){
    int count=0  , st = 0  , end = st+k-1, dis=0;
    vector <int> freq(100001, 0);

    for(int j =0 ; j< k ; j++) {
     if(freq[arr[j]]==0){
        dis++;
     }
     freq[arr[j]]++;
    }
    if(dis==x){
        ++count;
    }
    for(end=end+1 ; end< arr.size() ; end++) {
        freq[arr[st]]--;
     if (freq[arr[st]]==0)
     {
        dis--;
     }
     st++;


     freq[arr[end]]++;
     if (freq[arr[end]]==1)
     {
        dis++;
     }
     if (dis==x)
     {
        count++;
     }
     
    }
    return count;
}


int main(){
  

vector <int> arr = {1, 2, 1, 2, 3};
cout<<countDis1(arr , 3 , 2)<<endl;
cout<<countDis(arr , 3 , 2);

  return 0;
}