#include<iostream>
#include<string>
#include<map>
using namespace std;

void duplicates(string s) {
    map<char,int> mp;
    for(int i=0;i<s.length();i++)
        mp[s[i]]++;
    for(auto i:mp) {
        if(i.second > 1)
            cout << i.first << ", count = " << i.second<<endl;
    }
}

int main() {
    string s;
    getline(cin,s);
    duplicates(s);
    return 0;
}