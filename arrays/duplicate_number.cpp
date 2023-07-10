#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    int i = 0;
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size() + 1; i++)
    {
        if (nums[i - 1] == nums[i])
            return nums[i];
    }
    return -1;
}

int main() {
    vector<int> nums = {1,3,4,2,2};
    cout << findDuplicate(nums);
}