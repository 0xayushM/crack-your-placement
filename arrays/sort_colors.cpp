// DNF sort
#include<iostream>
#include<vector>
using namespace std;

void swap(vector<int>& nums, int x, int y) {
    int temp = nums[x];
    nums[x] = nums[y];
    nums[y] = temp;
}
void sortColors(vector<int>& nums) {
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high) {
        if(nums[mid] == 0)
            swap(nums,mid++,low++);
        else if(nums[mid] == 1)
            mid++;
        else if(nums[mid] == 2)
            swap(nums,mid,high--);
    }
}
int main() {
    vector<int> nums = {1,1,2,0,0,1,2,2,1,0};
    sortColors(nums);
    for(int i=0;i<nums.size();i++)
        cout << nums[i] << " ";
    return 0;
}