#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
       int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j+1, high = n-1;
                while(low < high){
                    if(nums[low] + nums[high] < newTarget){
                        low++;
                    }
                    else if(nums[low] + nums[high] > newTarget){
                        high--;
                    }
                    else{
                        set.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++; high--;
                    }
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
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