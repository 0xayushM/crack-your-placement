#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> arr(2);
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                arr[0] = i;
                arr[1] = j;
            }
        }
    }
    return arr;
}

int main() {
    vector<int> nums = {4,3,5,2,7,11,15};
    int k=9;
    vector<int> ans = twoSum(nums,k);
    for(auto &i:ans) {
        cout << i << " ";
    }
}