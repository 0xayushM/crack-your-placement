#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void moveZeroes(vector<int> &nums) {
    int s=0,e=0;
    while(e<nums.size()) {
        if(nums[e]) {
            int temp = nums[s];
            nums[s] = nums[e];
            nums[e] = temp;
            s++;
            e++;
        }
            
        else e++;
    }
}

int main() {
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(int i=0;i<nums.size();i++) {
        cout << nums[i] << " ";
    }
    return 0;
}