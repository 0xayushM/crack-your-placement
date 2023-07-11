#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums,int target) {
    sort(nums.begin(),nums.end());
    set<vector<int>> s;
    vector<vector<int>> output;
    for(int i=0;i<nums.size()-3;i++) {
        for(int j=i+1;j<nums.size()-2;j++) {
            int k=j+1;
            int l=nums.size()-1;
            while(k<l) {
                int sum = nums[i]+nums[j]+nums[k]+nums[l];
                if(sum == target) {
                    s.insert({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    l--;
                } else if(sum<0) k++;
                else l--;
            }
        }
    }
    for(auto x : s)
        output.push_back(x);
    return output;
}

int main() {
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> output = fourSum(nums,target);
    for(int i=0;i<output.size();i++) {
        for(int j=0;j<output[i].size();j++) {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}