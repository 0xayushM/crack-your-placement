#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto x:strs) {
            string word = x;
            sort(word.begin(),word.end());
            mp[word].push_back(x);
        }
        vector<vector<string>> ans;
        for(auto x:mp) {
            ans.push_back(x.second);
        }
        return ans;
    }

int main() {
    vector<string> strs = {"eat","ate","tan","ate","nat","bat"};
    vector<vector<string>> ans = groupAnagrams(strs);
    for(int i=0;i<ans.size();i++) {
        for(int j=0;j<ans[0].size();j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}