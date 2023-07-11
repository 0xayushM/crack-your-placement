#include<iostream>
#include<vector>
#include<map>
using namespace std;

int subarrayByK(vector<int>& nums,int k) {
    unordered_map<int,int> mp;
    mp[0]++;
    int sum=0, count=0;
    for(int i=0;i<nums.size();i++) {
        sum+=nums[i];
        int rem = sum%k;
        if(rem < 0) {
            rem+=k;
        }
        if(mp[rem]) {
            count+= mp[rem];
        }
        mp[rem]++;
    }
    return count;
}
int main() {
    vector<int> nums = {4,5,0,-2,-3,1};
    cout << subarrayByK(nums,5);
    return 0;
}