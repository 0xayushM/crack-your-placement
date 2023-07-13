#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int len = nums.size() / 2;
    unordered_map<int, int> a;
    for (auto x : nums)
        a[x]++;
    for (auto z : a)
    {
        if (z.second > len)
            return z.first;
    }
    return 0;
}
int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums);
}