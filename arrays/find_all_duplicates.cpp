#include<iostream>
#include<vector>
using namespace std;
vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;
    int check;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1] && check != nums[i])
        {
            ans.push_back(nums[i]);
            check = nums[i];
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {4,3,2,2,8,2,3,1};
    vector<int> ans = findDuplicates(nums);
    for(auto &i:ans) {
        cout << i << " ";
    }
    return 0;
}