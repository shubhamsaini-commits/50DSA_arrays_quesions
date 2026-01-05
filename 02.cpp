#include<iostream>

using namespace std;


int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int st = 0;
    int n = 5 , end = n-1;

    while (st<= end)
    {
        swap(arr[st] , arr[end]);
        ++st;
        --end;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}