#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;

int maximumSum(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    int sum=0,ans=0;
    mp[sum] = 1;
    for(auto it:nums) {
        sum+=it;
        int find = sum-k;
        if(mp.find(find) != mp.end())
            ans+=mp[find];
        mp[sum]++;
    }
    return ans;
}
int main() {
    vector<int> nums = {1,2,3};
    int k=3;
    cout << maximumSum(nums,k);
}