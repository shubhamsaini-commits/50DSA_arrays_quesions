#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
    if (s.size() <=1 ) return false; 
        vector <char> stack;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['  ){
                stack.push_back(s[i]);
            }
            
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'  ){
                if(stack.size() == 0) return false;
                char top = stack[stack.size() -1];
                if(    (s[i] == ')' && top == '(' ) || (s[i] == '}' && top == '{' ) || (s[i] == ']' && top == '[' ) ){

                    stack.pop_back();
                }
                else return false;
            }
            
        }
    }



int main(){
    cout<<isValid("(){[}");
    return 0;
}
