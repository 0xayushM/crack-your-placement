#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minDiff(vector<int> &packets,int m) {
    int min_diff = INT_MAX;
    if(m > packets.size()) 
        return -1;
    sort(packets.begin(),packets.end());
    for(int i=0;i<packets.size()-m;i++) {
        int diff = packets[i+m-1] - packets[i];
        if(diff<min_diff)
            min_diff = diff;
    }
    return min_diff;
}
int main() {
    vector<int> packets = {7,3,2,4,9,12,56};
    cout << minDiff(packets,3);
    return 0;
}