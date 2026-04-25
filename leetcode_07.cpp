#include <iostream>
#include <climits>

using namespace std;


//  FOMULA!!!
// ans = ans*10 + digit

int reverseInt(int num){
    int digit = 1;
    int ans=0  ;
    while(abs(num)>0){
        if(abs(ans) > INT_MAX/10){
            return 0;
        }
        
        digit = num%10;
        num/= 10;
        ans = ans *10 + digit;
        
    }
    return ans;
}




int main(){
    cout<<reverseInt(1234);
    return 0;
}
