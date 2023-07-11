#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> output;
        for(int i=0;i<nums.size();i++) {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0) {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                } else if(sum < 0) j++;
                else k--;
            }
        }
        for(auto x: s) {
            output.push_back(x);
        }
        return output;
    }
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> output = threeSum(nums);
    for (int i = 0; i < output.size(); i++)
    {
        for (int j = 0; j < output[i].size(); j++)
        {
            cout << output[i][j] << ",";
        }
        cout << endl;
    }
}