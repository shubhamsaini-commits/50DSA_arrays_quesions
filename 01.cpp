#include<iostream>
#include <climits>
using namespace std;
 // find maximum and minimum of a given array .. 

int main(){
    int arr[] = {3, 5, 4, 1, 9};
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
    if(max<arr[i]){
        max = arr[i];
    }
    if(min>arr[i]){
        min = arr[i];
    }
    }
    
    cout<<"the maximum is = "<<max;
    cout<<"the minimum is = "<<min;
    return 0;

}
