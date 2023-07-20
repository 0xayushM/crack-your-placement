#include<iostream>
#include<vector>
#include<string>
using namespace std;

string reverseWords(string s) {
    string rev="";
    reverse(s.begin(),s.end());
    int start = 0;
    int end = 0;
    int n = s.size();
    int i=0;
    while(i < n) {
        while(i<n && s[i] == ' ')
            i++;
        while(i<n && s[i] != ' ')
            s[end++] = s[i++];
        if(start<end) {
            reverse(s.begin() + start, s.begin() + end);
            s[end++] = ' ';
            start = end;
        }
        
        i++;
    }
    if (end > 0)
        s.resize(end - 1);
    return s;
}

int main() {
    string s = "KPMG capture the falg";
    cout << reverseWords(s);
}