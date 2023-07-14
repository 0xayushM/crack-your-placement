#include<iostream>
#include<stack>
#include<vector>
using namespace std;

bool isValid(string s) {
    stack<int> stk;
    for(char c:s) {
        if(c == '(' || c == '{' || c == '[')
            stk.push(c);
        else {
            if(stk.empty())
                return false;
            else if(c == ')' && stk.top() == '(')
                stk.pop();
            else if(c == '}' && stk.top() == '{')
                stk.pop();
            else if(c == ']' && stk.top() == '[')
                stk.pop();
            else return false; 
        }
    }
    return stk.empty();
}

int main() {
    string s = "(){}[][()]";
    bool ans = isValid(s);
    cout << ans;
}
