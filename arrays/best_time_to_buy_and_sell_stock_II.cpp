#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (prices[i] < prices[i + 1])
            ans += prices[i + 1] - prices[i];
    }
    return ans;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices);
}