#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int left=0, right=height.size()-1, maxArea=0;
    while(left<right) {
        int width = right-left;
        int minHeight = min(height[left],height[right]);
        int area = width * minHeight;
        maxArea = max(area, maxArea);
        if(height[left] > height[right]) 
            right--;
        else if(height[left] < height[right])
            left++;
        else {
            left++;
            right--;
        }
    }
    return maxArea;
}
int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height);
}